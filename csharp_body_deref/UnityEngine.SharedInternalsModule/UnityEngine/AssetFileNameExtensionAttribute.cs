// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetFileNameExtensionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
[VisibleToOtherModules]
internal sealed class AssetFileNameExtensionAttribute : Attribute
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly string _003CpreferredExtension_003Ek__BackingField;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x18")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly IEnumerable<string> _003CotherExtensions_003Ek__BackingField;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public AssetFileNameExtensionAttribute(string preferredExtension, params string[] otherExtensions)
	{
	}
}
