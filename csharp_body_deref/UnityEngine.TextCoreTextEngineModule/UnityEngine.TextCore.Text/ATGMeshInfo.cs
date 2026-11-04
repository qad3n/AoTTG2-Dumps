// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.ATGMeshInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/ATGMeshInfo.h")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct ATGMeshInfo
{
	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_TextElementInfosPtr;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x8")]
	private int m_TextElementCount;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0xC")]
	public int textAssetId;

	[Token(Token = "0x1700000D")]
	public Span<NativeTextElementInfo> textElementInfos
	{
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x3003080", Offset = "0x3001680", VA = "0x183003080")]
		get
		{
			return default(Span<NativeTextElementInfo>);
		}
	}
}
