// ==================== AoTTG2 cross-reference ====================
// Type: UI.GalleryMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/GalleryMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/GalleryMenu/GalleryMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000804")]
internal class GalleryMenu : ViewerMenu
{
	[Token(Token = "0x40027E9")]
	private const float MaxWidth = 1280f;

	[Token(Token = "0x40027EA")]
	private const float MaxHeight = 900f;

	[Token(Token = "0x40027EB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color FrameColor;

	[Token(Token = "0x40027EC")]
	[FieldOffset(Offset = "0xA0")]
	private GameObject _picture;

	[Token(Token = "0x40027ED")]
	[FieldOffset(Offset = "0xA8")]
	private int _backgroundCount;

	[Token(Token = "0x17000D59")]
	protected override int Count
	{
		[Token(Token = "0x6004CC5")]
		[Address(RVA = "0x5BF9E20", Offset = "0x5BF8E20", VA = "0x5BF9E20", Slot = "8")]
		get
		{
			// Lifted from source/cpp/UI/GalleryMenu.c (UI.GalleryMenu$$get_Count): clean
			int iVar1;
			List<string> pSVar2;

			iVar1 = this._backgroundCount;
			pSVar2 = UIManager.AvailableProfileIcons;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			return iVar1 + pSVar2._size;
		}
	}

	[Token(Token = "0x6004CC6")]
	[Address(RVA = "0x5BF9EA0", Offset = "0x5BF8EA0", VA = "0x5BF9EA0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/GalleryMenu.c (UI.GalleryMenu$$Setup): 1 lines keep C-only constructs
		int iVar1;
		JSONNode pSVar2;
		Transform parent;
		GameObject pUVar3;

		this.Setup();
		pSVar2 = MainMenu.MainBackgroundInfo;
		if (pSVar2 != null) {
			pSVar2 = pSVar2.get_Item("AllBackgrounds");
			if (pSVar2 != null) {
				iVar1 = pSVar2.get_AsInt();
				this._backgroundCount = iVar1;
				parent = this.transform;
				pUVar3 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Misc/GalleryImage");
				this._picture = pUVar3;
				pUVar3 = this._picture;
				ElementFactory.SetAnchor(pUVar3, 4, 4, (UnityEngine_Vector2_o)*(Vector2)typeof(ViewerMenu).static_fields);
				this.ShowCurrent();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CC7")]
	[Address(RVA = "0x5BF9FE0", Offset = "0x5BF8FE0", VA = "0x5BF9FE0", Slot = "9")]
	protected override void Load(int index)
	{
		// Lifted from source/cpp/UI/GalleryMenu.c (UI.GalleryMenu$$Load): 4 lines keep C-only constructs
		int iVar1;
		GameObject __this_00;
		List<string> __this_01;
		Image pUVar3;
		String pSVar4;
		ulong uVar5;
		ulong uVar6;
		Color UVar7;
		int iStack_2c;

		iStack_2c = index;
		__this_00 = this._picture;
		if (__this_00 != null) {
			iVar1 = this._backgroundCount;
			pUVar3 = __this_00.GetComponent<Image>();
			uVar5 = 0;
			uVar6 = 0;
			if (index < iVar1) {
				uVar5._0_4_ = (GalleryMenu.FrameColor).r;
				uVar5._4_4_ = (GalleryMenu.FrameColor).g;
				uVar6._0_4_ = (GalleryMenu.FrameColor).b;
				uVar6._4_4_ = (GalleryMenu.FrameColor).a;
			}
			if (pUVar3 != null) {
				UVar7.b = (float)(int)uVar6;
				UVar7.a = (float)(int)((ulong)uVar6 >> 0x20);
				UVar7.r = (float)(int)uVar5;
				UVar7.g = (float)(int)((ulong)uVar5 >> 0x20);
				pUVar3.set_color(UVar7);
				if (index < iVar1) {
					pSVar4 = iStack_2c.ToString();
					pSVar4 = String.Concat("Backgrounds/MainBackground", pSVar4, "Texture");
					this.SetPicture(pSVar4);
					return;
				}
				__this_01 = UIManager.AvailableProfileIcons;
				if (__this_01 != null) {
					pSVar4 = __this_01.get_Item(index - this._backgroundCount);
					pSVar4 = String.Concat("Icons/Profile/FullSize/", pSVar4, "IconFull");
					this.SetPicture(pSVar4);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CC8")]
	[Address(RVA = "0x5BFA1B0", Offset = "0x5BF91B0", VA = "0x5BFA1B0")]
	private void SetPicture(string image)
	{
		// Lifted from source/cpp/UI/GalleryMenu.c (UI.GalleryMenu$$SetPicture): 11 lines keep C-only constructs
		GameObject pUVar1;
		String path;
		int iVar2;
		int iVar3;
		Transform pUVar4;
		RawImage __this_00;
		Texture pUVar5;
		object pIVar6;
		ulong uVar7;
		RectTransform __this_01;
		uint uVar8;
		ulong uVar9;
		long lVar10;
		ulong uVar11;
		ulong uVar12;
		float fVar13;
		Vector2 value;
		float fVar14;

		pUVar1 = this._picture;
		if (((pUVar1 == null) ||(pUVar4 = pUVar1.transform, pUVar4 == null)) ||(pUVar4 = pUVar4.Find("Background"), pUVar4 == null)) {
			throw new NullReferenceException();
		}
		__this_00 = pUVar4.GetComponent<RawImage>();
		Resources.UnloadUnusedAssets();
		path = ResourcePaths.UI;
		pUVar5 = (Texture)ResourceManager.LoadAsset(path, image, false, false);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if ((pUVar5 != null) &&(pUVar5.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		__this_00.texture = pUVar5;
		pIVar6 = new float[3];
		if (pIVar6 == null) {
			throw new NullReferenceException();
		}
		if (*(int)&pIVar6[1].monitor == 0) {
			throw new IndexOutOfRangeException();
		}
		*(uint)&pIVar6[2].klass = 0x3f800000;
		pUVar5 = __this_00.m_Texture;
		if (pUVar5 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pUVar5.get_width();
		if (((ulong)pIVar6[1].monitor & 0xfffffffe) == 0) {
			throw new IndexOutOfRangeException();
		}
		*(float)((long)&pIVar6[2].klass + 4) = 1280.0 / (float)iVar2;
		pUVar5 = __this_00.m_Texture;
		if (pUVar5 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pUVar5.get_height();
		uVar8 = (uint)pIVar6[1].monitor;
		if (uVar8 < 3) {
			throw new IndexOutOfRangeException();
		}
		*(float)&pIVar6[2].monitor = 900.0 / (float)iVar2;
		fVar14 = *(float)&pIVar6[2].klass;
		if (1 < (int)uVar8) {
			uVar9 = (ulong)pIVar6[1].monitor & 0xffffffff;
			uVar12 = uVar9 - 1;
			uVar7 = (ulong)((uint)uVar12 & 3);
			if (uVar9 - 2 < 3) {
				lVar10 = 1;
			}
			else {
				uVar9 = 0;
				do {
					uVar11 = uVar9;
					fVar13 = *(float)((long)&pIVar6[2].klass + uVar11 * 4 + 4);
					if (fVar14 <= fVar13) {
						fVar13 = fVar14;
					}
					fVar14 = *(float)((long)&pIVar6[2].monitor + uVar11 * 4);
					if (fVar13 <= fVar14) {
						fVar14 = fVar13;
					}
					fVar13 = *(float)((long)&pIVar6[2].monitor + uVar11 * 4 + 4);
					if (fVar14 <= fVar13) {
						fVar13 = fVar14;
					}
					fVar14 = *(float)((long)&pIVar6[3].klass + uVar11 * 4);
					if (fVar13 <= fVar14) {
						fVar14 = fVar13;
					}
					uVar9 = uVar11 + 4;
				} while ((uVar12 & 0xfffffffffffffffc) != uVar11 + 4);
				lVar10 = uVar11 + 5;
			}
			if (uVar7 != 0) {
				uVar12 = 0;
				fVar13 = fVar14;
				do {
					fVar14 = *(float)((long)&pIVar6[2].klass + uVar12 * 4 + lVar10 * 4);
					if (fVar13 <= fVar14) {
						fVar14 = fVar13;
					}
					uVar12 = uVar12 + 1;
					fVar13 = fVar14;
				} while (uVar7 != uVar12);
			}
		}
		pUVar1 = this._picture;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		__this_01 = pUVar1.GetComponent<RectTransform>();
		pUVar5 = __this_00.m_Texture;
		if (pUVar5 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pUVar5.get_width();
		pUVar5 = __this_00.m_Texture;
		if (pUVar5 == null) {
			throw new NullReferenceException();
		}
		iVar3 = pUVar5.get_height();
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		value.x = fVar14 * (float)iVar2;
		value.y = fVar14 * (float)iVar3;
		__this_01.sizeDelta = value;
		return;
	}

	[Token(Token = "0x6004CC9")]
	[Address(RVA = "0x5BFA620", Offset = "0x5BF9620", VA = "0x5BFA620")]
	public GalleryMenu()
	{
		// Lifted from source/cpp/UI/GalleryMenu.c (UI.GalleryMenu$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547cd3 == false) {
			Il2CppMethodInitialized_07547cd3 = true;
			uVar1 = (typeof(ViewerMenu)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ViewerMenu)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/GalleryMenu.c.

	// UI.GalleryMenu$$.cctor: clean
	static GalleryMenu()
	{

		(GalleryMenu.FrameColor).r = 0.75;
		(GalleryMenu.FrameColor).g = 0.75;
		(GalleryMenu.FrameColor).b = 0.75;
		(GalleryMenu.FrameColor).a = 1.0;
		return;
	}
}
