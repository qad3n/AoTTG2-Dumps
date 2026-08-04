// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.NativeHeaderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000A")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
[VisibleToOtherModules]
internal class NativeHeaderAttribute : Attribute
{
	[Token(Token = "0x17000006")]
	public string Header
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4E9DC40", Offset = "0x4E9DC40", VA = "0x4E9DC40", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4E9DC50", Offset = "0x4E9DC50", VA = "0x4E9DC50")]
	public NativeHeaderAttribute(string header)
	{
	}
}
