// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLineRendererLifetime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLineRendererLifetime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200049A")]
internal class CustomLogicLineRendererLifetime : MonoBehaviour
{
	[Token(Token = "0x40016AB")]
	[FieldOffset(Offset = "0x20")]
	public CustomLogicLineRendererBuiltin LineRenderer;

	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x58FEE10", Offset = "0x58FDE10", VA = "0x58FEE10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x58FEE40", Offset = "0x58FDE40", VA = "0x58FEE40")]
	public CustomLogicLineRendererLifetime()
	{
	}
}
