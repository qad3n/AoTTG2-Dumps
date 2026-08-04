// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.RenamedFromAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200016A")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = true, Inherited = true)]
public sealed class RenamedFromAttribute : Attribute
{
	[Token(Token = "0x17000175")]
	public string previousName
	{
		[Token(Token = "0x6000E7D")]
		[Address(RVA = "0x4D47730", Offset = "0x4D47730", VA = "0x4D47730")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E7C")]
	[Address(RVA = "0x4D47700", Offset = "0x4D47700", VA = "0x4D47700")]
	public RenamedFromAttribute(string previousName)
	{
	}
}
