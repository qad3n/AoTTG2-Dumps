// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlImageAttributeDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200050E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class UxmlImageAttributeDescription : UxmlAttributeDescription
{
	[Token(Token = "0x40010FC")]
	[FieldOffset(Offset = "0x40")]
	private Type m_AssetType;

	[Token(Token = "0x170009F0")]
	public Background defaultValue
	{
		[Token(Token = "0x60026C3")]
		[Address(RVA = "0x6B5A8A0", Offset = "0x6B598A0", VA = "0x6B5A8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x6B5A800", Offset = "0x6B59800", VA = "0x6B5A800")]
	public UxmlImageAttributeDescription()
	{
	}

	[Token(Token = "0x60026C4")]
	[Address(RVA = "0x6B5A8C0", Offset = "0x6B598C0", VA = "0x6B5A8C0")]
	public Background GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return default(Background);
	}
}
