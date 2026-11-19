// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectLabel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectLabel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace PatreonEffects;

[Token(Token = "0x200008B")]
[DisallowMultipleComponent]
public class NameEffectLabel : MonoBehaviour
{
	[Token(Token = "0x40002DB")]
	[FieldOffset(Offset = "0x20")]
	private string _prefix;

	[Token(Token = "0x40002DC")]
	[FieldOffset(Offset = "0x28")]
	private string _name;

	[Token(Token = "0x40002DD")]
	[FieldOffset(Offset = "0x30")]
	private string _suffix;

	[Token(Token = "0x40002DE")]
	[FieldOffset(Offset = "0x38")]
	private float _fontSize;

	[Token(Token = "0x40002DF")]
	[FieldOffset(Offset = "0x3C")]
	private Color _color;

	[Token(Token = "0x40002E0")]
	[FieldOffset(Offset = "0x4C")]
	private TextAlignmentOptions _alignment;

	[Token(Token = "0x40002E1")]
	[FieldOffset(Offset = "0x50")]
	private bool _richText;

	[Token(Token = "0x40002E2")]
	[FieldOffset(Offset = "0x58")]
	private TextMeshProUGUI _prefixTmp;

	[Token(Token = "0x40002E3")]
	[FieldOffset(Offset = "0x60")]
	private TextMeshProUGUI _nameTmp;

	[Token(Token = "0x40002E4")]
	[FieldOffset(Offset = "0x68")]
	private TextMeshProUGUI _suffixTmp;

	[Token(Token = "0x40002E5")]
	[FieldOffset(Offset = "0x70")]
	private LayoutElement _prefixLayout;

	[Token(Token = "0x40002E6")]
	[FieldOffset(Offset = "0x78")]
	private LayoutElement _nameLayout;

	[Token(Token = "0x40002E7")]
	[FieldOffset(Offset = "0x80")]
	private LayoutElement _suffixLayout;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x88")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x90")]
	private TMP_FontAsset _font;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x0")]
	private static TMP_SpriteAsset _sharedSpriteAsset;

	[Token(Token = "0x17000092")]
	public string prefix
	{
		[Token(Token = "0x60003DD")]
		[Address(RVA = "0x58C65D0", Offset = "0x58C55D0", VA = "0x58C65D0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_prefix): clean
			return this._prefix;
		}
		[Token(Token = "0x60003DE")]
		[Address(RVA = "0x58C65E0", Offset = "0x58C55E0", VA = "0x58C65E0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_prefix): clean
			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (this == null) {
				throw new NullReferenceException();
			}
			this._prefix = value;
			this.ApplyAll();
			return;
		}
	}

	[Token(Token = "0x17000093")]
	public string nameText
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x58C66F0", Offset = "0x58C56F0", VA = "0x58C66F0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_nameText): clean
			return this._name;
		}
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x58C6700", Offset = "0x58C5700", VA = "0x58C6700")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_nameText): clean
			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (this == null) {
				throw new NullReferenceException();
			}
			this._name = value;
			this.ApplyAll();
			return;
		}
	}

	[Token(Token = "0x17000094")]
	public string suffix
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x58C6750", Offset = "0x58C5750", VA = "0x58C6750")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_suffix): clean
			return this._suffix;
		}
		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x58C6760", Offset = "0x58C5760", VA = "0x58C6760")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_suffix): clean
			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			if (this == null) {
				throw new NullReferenceException();
			}
			this._suffix = value;
			this.ApplyAll();
			return;
		}
	}

	[Token(Token = "0x17000095")]
	public float fontSize
	{
		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x58C67B0", Offset = "0x58C57B0", VA = "0x58C67B0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_fontSize): clean
			return this._fontSize;
		}
		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x58C67C0", Offset = "0x58C57C0", VA = "0x58C67C0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_fontSize): clean
			TextMeshProUGUI pTVar1;
			bool bVar2;

			this._fontSize = value;
			pTVar1 = this._prefixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._prefixTmp;
				if (pTVar1 == null) goto label_059c68c7;
				pTVar1.fontSize = value;
			}
			pTVar1 = this._nameTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._nameTmp;
				if (pTVar1 == null) goto label_059c68c7;
				pTVar1.fontSize = value;
			}
			pTVar1 = this._suffixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._suffixTmp;
				if (pTVar1 == null) {
		label_059c68c7: ;
					throw new NullReferenceException();
				}
				pTVar1.fontSize = value;
			}
			this.ApplyAll();
			return;
		}
	}

	[Token(Token = "0x17000096")]
	public Color color
	{
		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x58C68D0", Offset = "0x58C58D0", VA = "0x58C68D0")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_color): clean
			return (Color)this._color;
		}
		[Token(Token = "0x60003E6")]
		[Address(RVA = "0x58C68E0", Offset = "0x58C58E0", VA = "0x58C68E0")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_color): clean
			TextMeshProUGUI pTVar1;
			NameEffectController x;
			bool bVar2;
			float local_38;
			float fStack_34;

			local_38 = value.r;
			fStack_34 = value.g;
			this._color.r = local_38;
			this._color.g = fStack_34;
			this._color.b = value.b;
			this._color.a = value.a;
			pTVar1 = this._prefixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._prefixTmp;
				if (pTVar1 == null) goto label_059c6a42;
				pTVar1.set_color(value);
			}
			pTVar1 = this._suffixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._suffixTmp;
				if (pTVar1 == null) goto label_059c6a42;
				pTVar1.set_color(value);
			}
			pTVar1 = this._nameTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				x = this._nameEffect;
				bVar2 = ((Object)x == null);
				if (bVar2) {
					pTVar1 = this._nameTmp;
					if (pTVar1 != null) {
						pTVar1.set_color(value);
						return;
					}
		label_059c6a42: ;
					throw new NullReferenceException();
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000097")]
	public TextAlignmentOptions alignment
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x58C6A50", Offset = "0x58C5A50", VA = "0x58C6A50")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_alignment): clean
			return this._alignment;
		}
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x58C6A60", Offset = "0x58C5A60", VA = "0x58C6A60")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_alignment): clean
			TextMeshProUGUI pTVar1;
			bool bVar2;

			this._alignment = value;
			pTVar1 = this._prefixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._prefixTmp;
				if (pTVar1 == null) goto label_059c6b55;
				pTVar1.alignment = value;
			}
			pTVar1 = this._nameTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._nameTmp;
				if (pTVar1 == null) goto label_059c6b55;
				pTVar1.alignment = value;
			}
			pTVar1 = this._suffixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (!bVar2) {
				return;
			}
			pTVar1 = this._suffixTmp;
			if (pTVar1 != null) {
				pTVar1.alignment = value;
				return;
			}
		label_059c6b55: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000098")]
	public bool richText
	{
		[Token(Token = "0x60003E9")]
		[Address(RVA = "0x58C6B60", Offset = "0x58C5B60", VA = "0x58C6B60")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_richText): clean
			return this._richText;
		}
		[Token(Token = "0x60003EA")]
		[Address(RVA = "0x58C6B70", Offset = "0x58C5B70", VA = "0x58C6B70")]
		set
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$set_richText): clean
			TextMeshProUGUI pTVar1;
			bool bVar2;

			this._richText = value;
			pTVar1 = this._prefixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._prefixTmp;
				if (pTVar1 == null) goto label_059c6c65;
				pTVar1.richText = value;
			}
			pTVar1 = this._nameTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._nameTmp;
				if (pTVar1 == null) goto label_059c6c65;
				pTVar1.richText = value;
			}
			pTVar1 = this._suffixTmp;
			bVar2 = ((Object)pTVar1 != null);
			if (bVar2) {
				pTVar1 = this._suffixTmp;
				if (pTVar1 == null) {
		label_059c6c65: ;
					throw new NullReferenceException();
				}
				pTVar1.richText = value;
			}
			this.ApplyAll();
			return;
		}
	}

	[Token(Token = "0x17000099")]
	public TextMeshProUGUI prefixComponent
	{
		[Token(Token = "0x60003EB")]
		[Address(RVA = "0x58C6C70", Offset = "0x58C5C70", VA = "0x58C6C70")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_prefixComponent): clean
			return this._prefixTmp;
		}
	}

	[Token(Token = "0x1700009A")]
	public TextMeshProUGUI nameComponent
	{
		[Token(Token = "0x60003EC")]
		[Address(RVA = "0x58C6C80", Offset = "0x58C5C80", VA = "0x58C6C80")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_nameComponent): clean
			return this._nameTmp;
		}
	}

	[Token(Token = "0x1700009B")]
	public TextMeshProUGUI suffixComponent
	{
		[Token(Token = "0x60003ED")]
		[Address(RVA = "0x58C6C90", Offset = "0x58C5C90", VA = "0x58C6C90")]
		get
		{
			// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$get_suffixComponent): clean
			return this._suffixTmp;
		}
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x58C6CA0", Offset = "0x58C5CA0", VA = "0x58C6CA0")]
	public void SetFont(TMP_FontAsset font)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$SetFont): clean
		bool bVar1;

		bVar1 = ((Object)font == null);
		if (bVar1) {
			return;
		}
		this._font = font;
		this.ApplyAll();
		return;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x58C6D20", Offset = "0x58C5D20", VA = "0x58C6D20")]
	public void SetText(string prefix, string name, string suffix)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$SetText): clean
		uint uVar1;
		String pSVar2;
		MethodInfo method_00;

		if (prefix == null) {
			prefix = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = ((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = GisketchArabicText.ToVisual(prefix, false);
		if (this == null) {
			throw new NullReferenceException();
		}
		this._prefix = pSVar2;
		if (name == null) {
			name = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = GisketchArabicText.ToVisual(name, false);
		this._name = pSVar2;
		if (suffix == null) {
			suffix = (String)**(ulong*)(g_data_07556758 + 0xb8);
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		method_00 = (MethodInfo)GisketchArabicText.ToVisual(suffix, false);
		this._suffix = (String)method_00;
		this.ApplyAll();
		return;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x58C6630", Offset = "0x58C5630", VA = "0x58C6630")]
	private void ApplyAll()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$ApplyAll): clean
		String text;
		TMP_FontAsset pTVar1;

		text = String.Concat(this._prefix, this._name, this._suffix);
		pTVar1 = this._font;
		if (pTVar1 == null) {
			pTVar1 = GisketchTypography.Resolve("text", 400, null);
		}
		pTVar1 = GisketchTypography.ForText(text, pTVar1);
		NameEffectLabel.ApplyText(this._prefixTmp, this._prefixLayout, this._prefix, pTVar1) ;
		NameEffectLabel.ApplyText(this._nameTmp, this._nameLayout, this._name, pTVar1);
		NameEffectLabel.ApplyText(this._suffixTmp, this._suffixLayout, this._suffix, pTVar1) ;
		return;
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x58C7080", Offset = "0x58C6080", VA = "0x58C7080")]
	public void SetNameEffect(NameEffectType effect, Color a, Color b, Color c, Color d)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$SetNameEffect): 4 lines keep C-only constructs
		NameEffectController* targetAddress;
		TextMeshProUGUI pTVar1;
		NameEffectController x;
		bool bVar2;
		GameObject __this_00;
		NameEffectController method_00;
		NameEffectSettings settings;
		Color UVar3;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;
		float fStack_84;
		float local_78;
		float fStack_74;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;
		float local_38;
		float fStack_34;

		pTVar1 = this._nameTmp;
		bVar2 = ((Object)pTVar1 == null);
		if (bVar2) {
			return;
		}
		if (effect == 0) {
			this.ClearNameEffect();
			return;
		}
		x = this._nameEffect;
		targetAddress = &this._nameEffect;
		method_00 = null;
		bVar2 = ((Object)x == null);
		if (bVar2) {
			pTVar1 = this._nameTmp;
			if (pTVar1 == null) goto label_059c731c;
			__this_00 = pTVar1.gameObject;
			if (__this_00 == null) goto label_059c731c;
			method_00 = __this_00.AddComponent<NameEffectController>();
			*targetAddress = method_00;
		}
		settings = NameEffectPresets.GetPreset(effect);
		local_98 = a.r;
		fStack_94 = a.g;
		local_a8 = a.b;
		fStack_a4 = a.a;
		local_38 = d.r;
		fStack_34 = d.g;
		local_48 = d.b;
		fStack_44 = d.a;
		local_58 = c.r;
		fStack_54 = c.g;
		local_68 = c.b;
		fStack_64 = c.a;
		local_78 = b.r;
		fStack_74 = b.g;
		local_88 = b.b;
		fStack_84 = b.a;
		if (9.9999994e-11 <= fStack_a4 * fStack_a4 + fStack_94 * fStack_94 + local_98 * local_98 + local_a8 * local_a8) {
			if (settings == null) goto label_059c731c;
			settings.gradientA.r = local_98;
			settings.gradientA.g = fStack_94;
			settings.gradientA.b = local_a8;
			settings.gradientA.a = fStack_a4;
		}
		if (9.9999994e-11 <= fStack_84 * fStack_84 + fStack_74 * fStack_74 + local_78 * local_78 + local_88 * local_88) {
			if (settings == null) goto label_059c731c;
			settings.gradientB.r = local_78;
			settings.gradientB.g = fStack_74;
			settings.gradientB.b = local_88;
			settings.gradientB.a = fStack_84;
		}
		if (9.9999994e-11 <= fStack_64 * fStack_64 + fStack_54 * fStack_54 + local_58 * local_58 + local_68 * local_68) {
			if (settings == null) goto label_059c731c;
			settings.gradientC.r = local_58;
			settings.gradientC.g = fStack_54;
			settings.gradientC.b = local_68;
			settings.gradientC.a = fStack_64;
		}
		if (9.9999994e-11 <= fStack_44 * fStack_44 + fStack_34 * fStack_34 + local_38 * local_38 + local_48 * local_48) {
			if (settings == null) goto label_059c731c;
			settings.gradientD.r = local_38;
			settings.gradientD.g = fStack_34;
			settings.gradientD.b = local_48;
			settings.gradientD.a = fStack_44;
		}
		pTVar1 = this._nameTmp;
		if (pTVar1 != null) {
			UVar3.b = 1.0;
			UVar3.a = 1.0;
			UVar3.r = 1.0;
			UVar3.g = 1.0;
			pTVar1.set_color(UVar3);
			if (*targetAddress != null) {
				(*targetAddress).Apply(settings);
				return;
			}
		}
	label_059c731c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x58C7330", Offset = "0x58C6330", VA = "0x58C7330")]
	public void ClearNameEffect()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$ClearNameEffect): 5 lines keep C-only constructs
		NameEffectController* targetAddress;
		NameEffectController pPVar1;
		TextMeshProUGUI pTVar2;
		bool bVar3;

		pPVar1 = this._nameEffect;
		bVar3 = ((Object)pPVar1 != null);
		if (bVar3) {
			targetAddress = &this._nameEffect;
			if (*targetAddress == null) goto label_059c7434;
			(*targetAddress).Clear();
			pPVar1 = *targetAddress;
			Object.Destroy((Object)pPVar1);
			*targetAddress = null;
		}
		pTVar2 = this._nameTmp;
		bVar3 = ((Object)pTVar2 != null);
		if (!bVar3) {
			return;
		}
		pTVar2 = this._nameTmp;
		if (pTVar2 != null) {
			pTVar2.set_color((Color)this._color);
			return;
		}
	label_059c7434: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x58C7440", Offset = "0x58C6440", VA = "0x58C7440")]
	private void Awake()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$Awake): clean
		this.BuildIfNeeded();
		return;
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x58C7450", Offset = "0x58C6450", VA = "0x58C7450")]
	private void BuildIfNeeded()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$BuildIfNeeded): 3 lines keep C-only constructs
		bool bVar1;
		HorizontalLayoutGroup __this_00;
		GameObject pUVar2;
		ContentSizeFitter __this_01;
		TextMeshProUGUI pTVar3;
		MethodInfo* in_RCX;

		pTVar3 = this._prefixTmp;
		bVar1 = ((Object)pTVar3 != null);
		if (bVar1) {
			return;
		}
		__this_00 = this.GetComponent<HorizontalLayoutGroup>();
		bVar1 = ((Object)__this_00 == null);
		if (bVar1) {
			pUVar2 = this.gameObject;
			if (pUVar2 == null) goto label_059c769a;
			in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup;
			__this_00 = pUVar2.AddComponent<HorizontalLayoutGroup>();
		}
		if (__this_00 != null) {
			__this_00.childAlignment = 3;
			__this_00.childForceExpandWidth = false;
			__this_00.childForceExpandHeight = false;
			__this_00.spacing = 0.0;
			__this_01 = this.GetComponent<ContentSizeFitter>();
			bVar1 = ((Object)__this_01 == null);
			if (bVar1) {
				pUVar2 = this.gameObject;
				if (pUVar2 == null) goto label_059c769a;
				in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter;
				__this_01 = pUVar2.AddComponent<ContentSizeFitter>();
			}
			if (__this_01 != null) {
				__this_01.horizontalFit = 2;
				__this_01.verticalFit = 2;
				pTVar3 = this.CreateSegment("Prefix", ref this._prefixLayout);
				this._prefixTmp = pTVar3;
				pTVar3 = this.CreateSegment("Name", ref this._nameLayout);
				this._nameTmp = pTVar3;
				pTVar3 = this.CreateSegment("Suffix", ref this._suffixLayout);
				this._suffixTmp = pTVar3;
				return;
			}
		}
	label_059c769a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x58C76A0", Offset = "0x58C66A0", VA = "0x58C76A0")]
	private TextMeshProUGUI CreateSegment(string name, out LayoutElement layout)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$CreateSegment): 6 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this_00;
		Transform __this_01;
		Transform parent;
		TextMeshProUGUI tmp;
		LayoutElement pUVar3;

		components = (Type[])new Type[4];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_059c7a18: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_059c7a22;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_059c7a22;
			}
			if ((components.Length & 0xfffffffe) == 0) goto label_059c7a1d;
			components[1] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_TMPro_TextMeshProUGUI);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_059c7a22;
			}
			if (2 < (uint)components.Length) {
				components[2] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_059c7a22: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((components.Length & 0xfffffffc) != 0) {
					components[3] = pSVar1;
					__this_00 = new GameObject(name, components);
					if (__this_00 != null) {
						__this_01 = __this_00.transform;
						parent = this.transform;
						if (__this_01 != null) {
							__this_01.SetParent(parent, false);
							tmp = __this_00.GetComponent<TextMeshProUGUI>();
							NameEffectLabel.ApplySharedSpriteAsset(tmp);
							if (tmp != null) {
								tmp.fontSize = this._fontSize;
								tmp.set_color((Color)this._color);
								tmp.alignment = this._alignment;
								tmp.richText = this._richText;
								tmp.enableWordWrapping = false;
								tmp.overflowMode = 0;
								tmp.set_text((String)**(ulong*)(g_data_07556758 + 0xb8));
								pUVar3 = __this_00.GetComponent<LayoutElement>();
								*layout = pUVar3;
								pUVar3 = *layout;
								if (pUVar3 != null) {
									pUVar3.set_preferredWidth(0.0);
									pUVar3 = *layout;
									if (pUVar3 != null) {
										pUVar3.set_preferredHeight(0.0);
										return tmp;
									}
								}
							}
						}
					}
					goto label_059c7a18;
				}
			}
		}
	label_059c7a1d: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x58C7A40", Offset = "0x58C6A40", VA = "0x58C7A40")]
	private static void ApplySharedSpriteAsset(TextMeshProUGUI tmp)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$ApplySharedSpriteAsset): clean
		bool bVar1;
		TMP_SpriteAsset pTVar2;

		bVar1 = ((Object)tmp == null);
		if (!bVar1) {
			pTVar2 = NameEffectLabel._sharedSpriteAsset;
			bVar1 = ((Object)pTVar2 == null);
			if (bVar1) {
				pTVar2 = Resources.Load<TMP_SpriteAsset>("UI/Icons/Profile/ProfileIconsAtlas_256");
				if (pTVar2 == null) {
					pTVar2 = TMP_Settings.defaultSpriteAsset;
				}
				NameEffectLabel._sharedSpriteAsset = pTVar2;
			}
			pTVar2 = NameEffectLabel._sharedSpriteAsset;
			bVar1 = ((Object)pTVar2 != null);
			if (bVar1) {
				if (tmp == null) {
					throw new NullReferenceException();
				}
				tmp.spriteAsset = NameEffectLabel._sharedSpriteAsset ;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x58C6ED0", Offset = "0x58C5ED0", VA = "0x58C6ED0")]
	private static void ApplyText(TextMeshProUGUI tmp, LayoutElement layout, string content, TMP_FontAsset font)
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$ApplyText): clean
		Vector2 UVar1;
		Vector2 UVar2;
		bool bVar3;
		String text;
		float fVar4;
		float local_38;

		bVar3 = ((Object)tmp == null);
		if (!bVar3) {
			bVar3 = ((Object)layout == null);
			if (!bVar3) {
				if (tmp == null) {
	label_059c7079: ;
					throw new NullReferenceException();
				}
				tmp.font = font;
				tmp.set_text(content);
				bVar3 = String.IsNullOrEmpty(content);
				if (bVar3) {
					if (layout == null) goto label_059c7079;
					layout.set_preferredWidth(0.0);
					fVar4 = tmp.m_fontSize;
				}
				else {
					text = String.Concat(content, "|");
					UVar1 = tmp.GetPreferredValues(text, 3.4028235e+38, 3.4028235e+38);
					UVar2 = tmp.GetPreferredValues("|", 3.4028235e+38, 3.4028235e+38);
					if (layout == null) goto label_059c7079;
					local_38 = UVar1.x;
					local_38 = local_38 - UVar2.x;
					if (local_38 <= 0.0) {
						local_38 = 0.0;
					}
					layout.set_preferredWidth(local_38);
					fVar4 = tmp.get_preferredHeight();
				}
				layout.set_preferredHeight(fVar4);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x58C7BC0", Offset = "0x58C6BC0", VA = "0x58C7BC0")]
	public NameEffectLabel()
	{
		// Lifted from source/cpp/PatreonEffects/NameEffectLabel.c (PatreonEffects.NameEffectLabel$$.ctor): clean
		this._prefix = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._name = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._suffix = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this._fontSize = 18.0;
		this._color.r = 1.0;
		this._color.g = 1.0;
		this._color.b = 1.0;
		this._color.a = 1.0;
		this._alignment = 0x1001;
		this._richText = true;
		base();
		return;
	}
}
