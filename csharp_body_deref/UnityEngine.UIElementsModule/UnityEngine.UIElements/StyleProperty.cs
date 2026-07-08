using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003D1")]
internal class StyleProperty
{
	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private int m_Line;

	[Token(Token = "0x4000B61")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private StyleValueHandle[] m_Values;

	[NonSerialized]
	[Token(Token = "0x4000B62")]
	[FieldOffset(Offset = "0x28")]
	internal bool isCustomProperty;

	[NonSerialized]
	[Token(Token = "0x4000B63")]
	[FieldOffset(Offset = "0x29")]
	internal bool requireVariableResolve;

	[Token(Token = "0x1700067D")]
	public string name
	{
		[Token(Token = "0x600183C")]
		[Address(RVA = "0x4D90690", Offset = "0x4D90690", VA = "0x4D90690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067E")]
	public StyleValueHandle[] values
	{
		[Token(Token = "0x600183D")]
		[Address(RVA = "0x4D906A0", Offset = "0x4D906A0", VA = "0x4D906A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x4D906B0", Offset = "0x4D906B0", VA = "0x4D906B0")]
	public StyleProperty()
	{
	}
}
