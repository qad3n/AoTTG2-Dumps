// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SerializableEnum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000063")]
public class SerializableEnum
{
	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_EnumValueAsString;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private string m_EnumTypeAsString;

	[Token(Token = "0x17000047")]
	public Enum value
	{
		[Token(Token = "0x600056A")]
		[Address(RVA = "0x2AE54A0", Offset = "0x2AE3AA0", VA = "0x182AE54A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x2AE55B0", Offset = "0x2AE3BB0", VA = "0x182AE55B0")]
		set
		{
		}
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x2AE5410", Offset = "0x2AE3A10", VA = "0x182AE5410")]
	public SerializableEnum(Type enumType)
	{
	}
}
