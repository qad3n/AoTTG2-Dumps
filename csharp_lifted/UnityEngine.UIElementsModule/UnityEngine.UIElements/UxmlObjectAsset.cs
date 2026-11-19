// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlObjectAsset
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B5BFC0", Offset = "0x6B5AFC0", VA = "0x6B5BFC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60026EB")]
		[Address(RVA = "0x6B5BFD0", Offset = "0x6B5AFD0", VA = "0x6B5BFD0")]
		set
		{
		}
	}

	[Token(Token = "0x170009FB")]
	public bool isField
	{
		[Token(Token = "0x60026EC")]
		[Address(RVA = "0x6B5BFE0", Offset = "0x6B5AFE0", VA = "0x6B5BFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60026E9")]
	[Address(RVA = "0x6B5BFB0", Offset = "0x6B5AFB0", VA = "0x6B5BFB0", Slot = "6")]
	public override bool HasParent()
	{
		return default(bool);
	}

	[Token(Token = "0x60026ED")]
	[Address(RVA = "0x6B5BFF0", Offset = "0x6B5AFF0", VA = "0x6B5BFF0")]
	public UxmlObjectAsset(string fullTypeNameOrFieldName, bool isField, [Optional] UxmlNamespaceDefinition xmlNamespace)
	{
	}

	[Token(Token = "0x60026EE")]
	[Address(RVA = "0x6B5C040", Offset = "0x6B5B040", VA = "0x6B5C040", Slot = "7")]
	internal override bool Accepts(UxmlAsset asset, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x60026EF")]
	[Address(RVA = "0x6B5C1D0", Offset = "0x6B5B1D0", VA = "0x6B5C1D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
