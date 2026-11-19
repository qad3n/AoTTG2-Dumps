// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorTexturePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorTexturePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorTexturePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20008D2")]
internal class MapEditorTexturePopup : MapEditorAddObjectPopup
{
	[Token(Token = "0x17000EB5")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005403")]
		[Address(RVA = "0x5C9CC30", Offset = "0x5C9BC30", VA = "0x5C9CC30", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$get_TopBarHeight): clean
			return 65.0;
		}
	}

	[Token(Token = "0x17000EB6")]
	protected override float Height
	{
		[Token(Token = "0x6005404")]
		[Address(RVA = "0x5C9CC40", Offset = "0x5C9BC40", VA = "0x5C9CC40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$get_Height): clean
			return 800.0;
		}
	}

	[Token(Token = "0x17000EB7")]
	protected override bool TwoRows
	{
		[Token(Token = "0x6005405")]
		[Address(RVA = "0x5C9CC50", Offset = "0x5C9BC50", VA = "0x5C9CC50", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$get_TwoRows): clean
			return false;
		}
	}

	[Token(Token = "0x17000EB8")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6005406")]
		[Address(RVA = "0x5C9CC60", Offset = "0x5C9BC60", VA = "0x5C9CC60", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$get_DefaultCategoryPanel): clean
			return "All";
		}
	}

	[Token(Token = "0x6005407")]
	[Address(RVA = "0x5C9CC90", Offset = "0x5C9BC90", VA = "0x5C9CC90", Slot = "63")]
	protected override string[] GetCategories()
	{
		// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$GetCategories): clean
		String[] pSVar1;

		pSVar1 = (String[])new string[7];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "All";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Nature";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "Brick";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "Metal";
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = "Wood";
							if (5 < (uint)pSVar1.Length) {
								pSVar1[5] = "Stone";
								if (6 < (uint)pSVar1.Length) {
									pSVar1[6] = "Misc";
									return pSVar1;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005408")]
	[Address(RVA = "0x5C9CE10", Offset = "0x5C9BE10", VA = "0x5C9CE10", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$RegisterCategoryPanels): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Il2CppType handle;
		object key;
		bool bVar2;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		Type value;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_58;
		byte puStack_38;

		SStack_58._dictionary = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		SStack_58._currentKey = null;
		pSVar1 = (Dictionary<object, object>)this._topButtons;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Keys;
			if (__this_00 != null) {
				SStack_58 = __this_00.GetEnumerator();
				puStack_38 = (byte)&SStack_58;
				while(true) {
					bVar2 = SStack_58.MoveNext();
					key = SStack_58._currentKey;
					handle = TypeRef_UI_MapEditorTexturePanel;
					if (!bVar2) {
						SStack_58.Dispose();
						return;
					}
					pSVar1 = (Dictionary<object, object>)this._categoryPanelTypes;
					value = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
					if (pSVar1 == null) break;
					pSVar1.Add(key, (object)value);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005409")]
	[Address(RVA = "0x5C9CFE0", Offset = "0x5C9BFE0", VA = "0x5C9CFE0")]
	public MapEditorTexturePopup()
	{
		// Lifted from source/cpp/UI/MapEditorTexturePopup.c (UI.MapEditorTexturePopup$$.ctor): clean
		base();
		return;
	}
}
