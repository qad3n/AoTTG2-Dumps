// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleProperty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50B7FC0", Offset = "0x50B7FC0", VA = "0x50B7FC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067E")]
	public StyleValueHandle[] values
	{
		[Token(Token = "0x600183D")]
		[Address(RVA = "0x50B7FD0", Offset = "0x50B7FD0", VA = "0x50B7FD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600183E")]
	[Address(RVA = "0x50B7FE0", Offset = "0x50B7FE0", VA = "0x50B7FE0")]
	public StyleProperty()
	{
	}
}
