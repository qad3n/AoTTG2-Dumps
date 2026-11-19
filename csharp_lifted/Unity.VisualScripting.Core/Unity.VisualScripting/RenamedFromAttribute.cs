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
	[Token(Token = "0x17000178")]
	public string previousName
	{
		[Token(Token = "0x6000E87")]
		[Address(RVA = "0x6833470", Offset = "0x6832470", VA = "0x6833470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E86")]
	[Address(RVA = "0x6833440", Offset = "0x6832440", VA = "0x6833440")]
	public RenamedFromAttribute(string previousName)
	{
	}
}
