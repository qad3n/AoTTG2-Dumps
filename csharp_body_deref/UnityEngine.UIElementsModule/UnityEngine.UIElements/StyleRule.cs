using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003D2")]
internal class StyleRule
{
	[Token(Token = "0x4000B64")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleProperty[] m_Properties;

	[Token(Token = "0x4000B65")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal int line;

	[NonSerialized]
	[Token(Token = "0x4000B66")]
	[FieldOffset(Offset = "0x1C")]
	internal int customPropertiesCount;

	[Token(Token = "0x1700067F")]
	public StyleProperty[] properties
	{
		[Token(Token = "0x600183F")]
		[Address(RVA = "0x4D906C0", Offset = "0x4D906C0", VA = "0x4D906C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x4D906D0", Offset = "0x4D906D0", VA = "0x4D906D0")]
	public StyleRule()
	{
	}
}
