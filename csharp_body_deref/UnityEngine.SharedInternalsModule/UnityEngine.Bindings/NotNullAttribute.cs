// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.NotNullAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000013")]
[AttributeUsage(AttributeTargets.Parameter)]
[VisibleToOtherModules]
internal class NotNullAttribute : Attribute
{
	[Token(Token = "0x17000012")]
	public string Exception
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4E9E260", Offset = "0x4E9E260", VA = "0x4E9E260")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4E9E270", Offset = "0x4E9E270", VA = "0x4E9E270")]
	public NotNullAttribute(string exception = "ArgumentNullException")
	{
	}
}
