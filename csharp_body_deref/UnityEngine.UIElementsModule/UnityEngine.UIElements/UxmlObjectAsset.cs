// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlObjectAsset
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000512")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class UxmlObjectAsset : UxmlAsset
{
	[Token(Token = "0x400110C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private int m_ParentId;

	[Token(Token = "0x400110D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private bool m_IsField;

	[Token(Token = "0x170009FA")]
	public int parentId
	{
		[Token(Token = "0x60026EA")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60026EB")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009FB")]
	public bool isField
	{
		[Token(Token = "0x60026EC")]
		[Address(RVA = "0x1B020E0", Offset = "0x1B006E0", VA = "0x181B020E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60026E9")]
	[Address(RVA = "0x31579F0", Offset = "0x3155FF0", VA = "0x1831579F0", Slot = "6")]
	public override bool HasParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60026ED")]
	[Address(RVA = "0x3157B00", Offset = "0x3156100", VA = "0x183157B00")]
	public UxmlObjectAsset(string fullTypeNameOrFieldName, bool isField, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
	}

	[Token(Token = "0x60026EE")]
	[Address(RVA = "0x3157830", Offset = "0x3155E30", VA = "0x183157830", Slot = "7")]
	internal override bool Accepts(UxmlAsset asset, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x60026EF")]
	[Address(RVA = "0x3157A00", Offset = "0x3156000", VA = "0x183157A00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
