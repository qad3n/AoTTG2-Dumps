// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchIconLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchIconLoader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x2000029")]
public static class GisketchIconLoader
{
	[Token(Token = "0x40000B7")]
	private const string Root = "Icons/kenney-icons/";

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x5230C50", Offset = "0x522FC50", VA = "0x5230C50")]
	public static Sprite Load(string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchIconLoader.c (Gisketch.Aottg2UI.Styling.GisketchIconLoader$$Load): clean
		bool bVar1;
		String path;
		Sprite pUVar2;

		bVar1 = String.IsNullOrEmpty(icon);
		if (bVar1) {
			return null;
		}
		path = GisketchIconLoader.ResolvePath(icon);
		pUVar2 = Resources.Load<Sprite>(path);
		return pUVar2;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x5230CA0", Offset = "0x522FCA0", VA = "0x5230CA0")]
	private static string ResolvePath(string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchIconLoader.c (Gisketch.Aottg2UI.Styling.GisketchIconLoader$$ResolvePath): 2 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		String pSVar3;
		String* ppSVar4;

		if (icon == null) {
			throw new NullReferenceException();
		}
		ppSVar4 = &"Icons/";
		bVar1 = icon.StartsWith("Icons/");
		if (!bVar1) {
			bVar1 = icon.StartsWith("UI/");
			if (!bVar1) {
				iVar2 = icon.IndexOf(0x2f);
				if (iVar2 < 0) {
					ppSVar4 = &"Icons/kenney-icons/";
				}
				pSVar3 = String.Concat(*ppSVar4, icon);
				return pSVar3;
			}
		}
		return icon;
	}
}
