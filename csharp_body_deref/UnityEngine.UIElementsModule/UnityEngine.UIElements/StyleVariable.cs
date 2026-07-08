using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003E0")]
internal struct StyleVariable
{
	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x0")]
	public readonly string name;

	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0x8")]
	public readonly StyleSheet sheet;

	[Token(Token = "0x4000BB1")]
	[FieldOffset(Offset = "0x10")]
	public readonly StyleValueHandle[] handles;

	[Token(Token = "0x6001880")]
	[Address(RVA = "0x4C266F0", Offset = "0x4C266F0", VA = "0x4C266F0")]
	public StyleVariable(string name, StyleSheet sheet, StyleValueHandle[] handles)
	{
	}

	[Token(Token = "0x6001881")]
	[Address(RVA = "0x4C26730", Offset = "0x4C26730", VA = "0x4C26730", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
