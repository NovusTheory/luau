// This file is part of the Luau programming language and is licensed under MIT License; see LICENSE.txt for details
#pragma once

#include "Luau/Error.h"
#include "Luau/Location.h"
#include "Luau/TypeVar.h"

#include <memory>
#include <optional>

namespace Luau
{

using ScopePtr = std::shared_ptr<struct Scope>;

std::optional<TypeId> findMetatableEntry(ErrorVec& errors, TypeId type, const std::string& entry, Location location);
std::optional<TypeId> findTablePropertyRespectingMeta(ErrorVec& errors, TypeId ty, const std::string& name, Location location);
std::optional<TypeId> getIndexTypeFromType(
    const ScopePtr& scope, ErrorVec& errors, TypeArena* arena, TypeId type, const std::string& prop, const Location& location, bool addErrors,
    InternalErrorReporter& handle);

} // namespace Luau
