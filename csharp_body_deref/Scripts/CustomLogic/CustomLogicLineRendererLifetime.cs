// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineRendererLifetime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineRendererLifetime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200043B")]
internal class CustomLogicLineRendererLifetime : MonoBehaviour
{
	[Token(Token = "0x400150B")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicLineRendererBuiltin LineRenderer;

	[Token(Token = "0x6001CD9")]
	[Address(RVA = "0x1F05E40", Offset = "0x1F04440", VA = "0x181F05E40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001CDA")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CustomLogicLineRendererLifetime()
	{
	}
}
