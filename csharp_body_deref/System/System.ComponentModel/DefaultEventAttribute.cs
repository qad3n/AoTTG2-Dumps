// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultEventAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000283")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultEventAttribute : Attribute
{
	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultEventAttribute Default;

	[Token(Token = "0x17000382")]
	public string Name
	{
		[Token(Token = "0x6000FC8")]
		[Address(RVA = "0x488FA80", Offset = "0x488FA80", VA = "0x488FA80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x488FA50", Offset = "0x488FA50", VA = "0x488FA50")]
	public DefaultEventAttribute(string name)
	{
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x488FA90", Offset = "0x488FA90", VA = "0x488FA90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x488FB00", Offset = "0x488FB00", VA = "0x488FB00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
