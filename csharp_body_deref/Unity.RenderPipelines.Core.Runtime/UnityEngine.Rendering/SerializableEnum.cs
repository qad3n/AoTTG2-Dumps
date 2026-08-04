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
		[Address(RVA = "0x4B99600", Offset = "0x4B99600", VA = "0x4B99600")]
		get
		{
			return null;
		}
		[Token(Token = "0x600064A")]
		[Address(RVA = "0x4B99710", Offset = "0x4B99710", VA = "0x4B99710")]
		set
		{
		}
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x4B99750", Offset = "0x4B99750", VA = "0x4B99750")]
	public SerializableEnum(Type enumType)
	{
	}
}
