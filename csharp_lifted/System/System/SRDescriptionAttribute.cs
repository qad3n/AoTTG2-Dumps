// ==================== AoTTG2 cross-reference ====================
// Type: System.SRDescriptionAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000097")]
[AttributeUsage(AttributeTargets.All)]
internal class SRDescriptionAttribute : DescriptionAttribute
{
	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x18")]
	private bool isReplaced;

	[Token(Token = "0x17000087")]
	public override string Description
	{
		[Token(Token = "0x6000298")]
		[Address(RVA = "0x61DC880", Offset = "0x61DB880", VA = "0x61DC880", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x61DC820", Offset = "0x61DB820", VA = "0x61DC820")]
	public SRDescriptionAttribute(string description)
	{
	}
}
