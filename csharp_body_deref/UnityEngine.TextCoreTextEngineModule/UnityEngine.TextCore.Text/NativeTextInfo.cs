// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.NativeTextInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200002C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule" })]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/TextInfo.h")]
internal struct NativeTextInfo
{
	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_MeshInfosPtr;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x8")]
	public int meshInfoCount;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0xC")]
	public int totalWidth;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x10")]
	public int totalHeight;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x14")]
	public bool isElided;

	[Token(Token = "0x17000012")]
	public Span<ATGMeshInfo> meshInfos
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x3016440", Offset = "0x3014A40", VA = "0x183016440")]
		get
		{
			return default(Span<ATGMeshInfo>);
		}
	}
}
