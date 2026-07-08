using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003DC")]
internal struct StyleValueHandle
{
	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private StyleValueType m_ValueType;

	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0x4")]
	[SerializeField]
	internal int valueIndex;

	[Token(Token = "0x1700068B")]
	public StyleValueType valueType
	{
		[Token(Token = "0x600187D")]
		[Address(RVA = "0x4C265C0", Offset = "0x4C265C0", VA = "0x4C265C0")]
		get
		{
			return default(StyleValueType);
		}
		[Token(Token = "0x600187E")]
		[Address(RVA = "0x4C265D0", Offset = "0x4C265D0", VA = "0x4C265D0")]
		internal set
		{
		}
	}
}
