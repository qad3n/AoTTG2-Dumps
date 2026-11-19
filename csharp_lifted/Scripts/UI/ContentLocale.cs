// ==================== AoTTG2 cross-reference ====================
// Type: UI.ContentLocale
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/ContentLocale.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Map;

namespace UI;

[Token(Token = "0x20007D3")]
internal static class ContentLocale
{
	[Token(Token = "0x4002743")]
	private const string ModesCategory = "GameModes";

	[Token(Token = "0x4002744")]
	private const string ExperiencesCategory = "Experiences";

	[Token(Token = "0x4002745")]
	private const string MapsCategory = "Maps";

	[Token(Token = "0x6004B88")]
	[Address(RVA = "0x5BE4B50", Offset = "0x5BE3B50", VA = "0x5BE4B50")]
	public static string ModeName(string mode)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ModeName): clean
		String pSVar1;

		pSVar1 = ContentLocale.Get("GameModes", mode, (String)**(ulong*)(g_data_07556758 + 0xb8), mode);
		return pSVar1;
	}

	[Token(Token = "0x6004B89")]
	[Address(RVA = "0x5BE4CA0", Offset = "0x5BE3CA0", VA = "0x5BE4CA0")]
	public static string ModeDescription(string mode, string fallback)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ModeDescription): clean
		String pSVar1;

		pSVar1 = ContentLocale.Get("GameModes", mode, "Description", fallback);
		return pSVar1;
	}

	[Token(Token = "0x6004B8A")]
	[Address(RVA = "0x5BE4D00", Offset = "0x5BE3D00", VA = "0x5BE4D00")]
	public static string ModeSettingTooltip(string mode, string setting, string fallback)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ModeSettingTooltip): clean
		String pSVar1;

		pSVar1 = String.Concat("Tooltip.", setting);
		pSVar1 = ContentLocale.Get("GameModes", mode, pSVar1, fallback);
		return pSVar1;
	}

	[Token(Token = "0x6004B8B")]
	[Address(RVA = "0x5BE4D70", Offset = "0x5BE3D70", VA = "0x5BE4D70")]
	public static string MapCategory(string category)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$MapCategory): clean
		String pSVar1;

		pSVar1 = ContentLocale.Get("Maps", "Category", category, category);
		return pSVar1;
	}

	[Token(Token = "0x6004B8C")]
	[Address(RVA = "0x5BE4DC0", Offset = "0x5BE3DC0", VA = "0x5BE4DC0")]
	public static string ExperienceCategory(string category)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ExperienceCategory): clean
		String pSVar1;

		pSVar1 = ContentLocale.Get("Experiences", "Category", category, category);
		return pSVar1;
	}

	[Token(Token = "0x6004B8D")]
	[Address(RVA = "0x5BE4E10", Offset = "0x5BE3E10", VA = "0x5BE4E10")]
	public static string ExperienceSubcategory(string subcategory)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ExperienceSubcategory): clean
		String pSVar1;

		pSVar1 = ContentLocale.Get("Experiences", "Subcategory", subcategory, subcategory);
		return pSVar1;
	}

	[Token(Token = "0x6004B8E")]
	[Address(RVA = "0x5BE4E60", Offset = "0x5BE3E60", VA = "0x5BE4E60")]
	public static string ExperienceName(Experience experience)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ExperienceName): clean
		String pSVar1;

		if (experience == null) {
			throw new NullReferenceException();
		}
		pSVar1 = experience.Name;
		pSVar1 = ContentLocale.Get("Experiences", "Name", pSVar1, pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6004B8F")]
	[Address(RVA = "0x5BE4EC0", Offset = "0x5BE3EC0", VA = "0x5BE4EC0")]
	public static string ExperienceDescription(Experience experience)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ExperienceDescription): clean
		String pSVar1;

		if (experience == null) {
			throw new NullReferenceException();
		}
		pSVar1 = ContentLocale.Get("Experiences", "Description", experience.TemplateName, (String)**(ulong*)(g_data_07556758 + 0xb8));
		return pSVar1;
	}

	[Token(Token = "0x6004B90")]
	[Address(RVA = "0x5BE4F30", Offset = "0x5BE3F30", VA = "0x5BE4F30")]
	public static string ExperienceVariant(string variant)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$ExperienceVariant): clean
		String pSVar1;

		pSVar1 = ContentLocale.Get("Experiences", "Variant", variant, variant);
		return pSVar1;
	}

	[Token(Token = "0x6004B91")]
	[Address(RVA = "0x5BE4BA0", Offset = "0x5BE3BA0", VA = "0x5BE4BA0")]
	private static string Get(string category, string subCategory, string item, string fallback)
	{
		// Lifted from source/cpp/UI/ContentLocale.c (UI.ContentLocale$$Get): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(subCategory);
		if (!bVar1) {
			bVar1 = UIManager.HasLocale(category, subCategory, item, "English");
			if (bVar1) {
				pSVar2 = UIManager.GetLocale(category, subCategory, item, "", "");
				return pSVar2;
			}
		}
		if (fallback == null) {
			fallback = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return fallback;
	}
}
