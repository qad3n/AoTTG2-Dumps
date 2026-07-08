using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000095")]
public class SerializableEnum
{
	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_EnumValueAsString;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_EnumTypeAsString;

	[Token(Token = "0x17000067")]
	public Enum value
	{
		[Token(Token = "0x6000649")]
		[Address(RVA = "0x4874510", Offset = "0x4874510", VA = "0x4874510")]
		get
		{
			return null;
		}
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x4874620", Offset = "0x4874620", VA = "0x4874620")]
		set
		{
		}
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4874660", Offset = "0x4874660", VA = "0x4874660")]
	public SerializableEnum(Type enumType)
	{
	}
}
