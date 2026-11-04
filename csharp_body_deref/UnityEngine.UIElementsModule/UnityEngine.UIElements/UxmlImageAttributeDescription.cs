// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlImageAttributeDescription
// Update status: NEW in this game update
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
		[Address(RVA = "0x3156E80", Offset = "0x3155480", VA = "0x183156E80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60026C2")]
	[Address(RVA = "0x3156DE0", Offset = "0x31553E0", VA = "0x183156DE0")]
	public UxmlImageAttributeDescription()
	{
	}

	[Token(Token = "0x60026C4")]
	[Address(RVA = "0x3156C30", Offset = "0x3155230", VA = "0x183156C30")]
	public Background GetValueFromBag(IUxmlAttributes bag, CreationContext cc)
	{
		return default(Background);
	}
}
