// ==================== AoTTG2 cross-reference ====================
// Type: UI.SetActionIcons
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/SetActionIcons.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20008E3")]
internal static class SetActionIcons
{
	[Token(Token = "0x4002CDD")]
	public const string Root = "Icons/kenney-icons";

	[Token(Token = "0x4002CDE")]
	public const string Create = "plus";

	[Token(Token = "0x4002CDF")]
	public const string Delete = "trashcan";

	[Token(Token = "0x4002CE0")]
	public const string Rename = "pencil";

	[Token(Token = "0x4002CE1")]
	public const string Copy = "copy";

	[Token(Token = "0x4002CE2")]
	public const string Import = "import";

	[Token(Token = "0x4002CE3")]
	public const string Export = "export";

	[Token(Token = "0x60054A0")]
	[Address(RVA = "0x5CABBB0", Offset = "0x5CAABB0", VA = "0x5CABBB0")]
	public static string For(string operation)
	{
		// Lifted from source/cpp/UI/SetActionIcons.c (UI.SetActionIcons$$For): 1 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;

		bVar1 = (operation == "Create");
		if (bVar1) {
			ppSVar2 = &"plus";
		}
		else {
			bVar1 = (operation == "Delete");
			if (bVar1) {
				ppSVar2 = &"trashcan";
			}
			else {
				bVar1 = (operation == "Rename");
				if (bVar1) {
					ppSVar2 = &"pencil";
				}
				else {
					bVar1 = (operation == "Copy");
					if (bVar1) {
						ppSVar2 = &"copy";
					}
					else {
						bVar1 = (operation == "Import");
						if (bVar1) {
							ppSVar2 = &"import";
						}
						else {
							bVar1 = (operation == "Export");
							if (!bVar1) {
								return null;
							}
							ppSVar2 = &"export";
						}
					}
				}
			}
		}
		return *ppSVar2;
	}
}
