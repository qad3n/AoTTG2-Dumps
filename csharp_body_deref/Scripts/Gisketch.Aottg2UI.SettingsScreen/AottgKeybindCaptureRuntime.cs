// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindCaptureRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200011A")]
internal sealed class AottgKeybindCaptureRuntime : MonoBehaviour
{
	[Token(Token = "0x40006AB")]
	public const string NodeType = "AottgKeybindCaptureRuntime";

	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x20")]
	private int _token;

	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x24")]
	private int _skipFrames;

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x435E110", Offset = "0x435E110", VA = "0x435E110")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x435E670", Offset = "0x435E670", VA = "0x435E670")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x435E6F0", Offset = "0x435E6F0", VA = "0x435E6F0")]
	private void Setup(int token)
	{
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x435E700", Offset = "0x435E700", VA = "0x435E700")]
	private void Update()
	{
	}

	[Token(Token = "0x60005C6")]
	[Address(RVA = "0x435E7A0", Offset = "0x435E7A0", VA = "0x435E7A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60005C7")]
	[Address(RVA = "0x435E7F0", Offset = "0x435E7F0", VA = "0x435E7F0")]
	public AottgKeybindCaptureRuntime()
	{
	}
}
