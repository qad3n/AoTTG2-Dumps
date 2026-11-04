// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000158")]
internal sealed class AottgKeybindCaptureRuntime : MonoBehaviour
{
	[Token(Token = "0x40007D6")]
	public const string NodeType = "AottgKeybindCaptureRuntime";

	[Token(Token = "0x40007D7")]
	[FieldOffset(Offset = "0x20")]
	private int _token;

	[Token(Token = "0x40007D8")]
	[FieldOffset(Offset = "0x24")]
	private int _skipFrames;

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x2305D00", Offset = "0x2304300", VA = "0x182305D00")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x2305C00", Offset = "0x2304200", VA = "0x182305C00")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
	private void Setup(int token)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x2305DC0", Offset = "0x23043C0", VA = "0x182305DC0")]
	private void Update()
	{
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x2305C90", Offset = "0x2304290", VA = "0x182305C90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x2305E80", Offset = "0x2304480", VA = "0x182305E80")]
	public AottgKeybindCaptureRuntime()
	{
	}
}
