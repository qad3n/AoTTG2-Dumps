// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleValueHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F4DEF0", Offset = "0x4F4DEF0", VA = "0x4F4DEF0")]
		get
		{
			return default(StyleValueType);
		}
		[Token(Token = "0x600187E")]
		[Address(RVA = "0x4F4DF00", Offset = "0x4F4DF00", VA = "0x4F4DF00")]
		internal set
		{
		}
	}
}
