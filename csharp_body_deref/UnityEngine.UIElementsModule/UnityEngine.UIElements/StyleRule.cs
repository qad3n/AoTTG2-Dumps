// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleRule
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50B7FF0", Offset = "0x50B7FF0", VA = "0x50B7FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001840")]
	[Address(RVA = "0x50B8000", Offset = "0x50B8000", VA = "0x50B8000")]
	public StyleRule()
	{
	}
}
