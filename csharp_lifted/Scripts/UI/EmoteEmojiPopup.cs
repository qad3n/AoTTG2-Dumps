// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteEmojiPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EmoteEmojiPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteEmojiPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000839")]
internal class EmoteEmojiPopup : EmoteTextPopup
{
	[Token(Token = "0x40028F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected RawImage _emojiImage;

	[Token(Token = "0x40028FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected bool _animated;

	[Token(Token = "0x40028FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE9")]
	protected bool _isFirstFrame;

	[Token(Token = "0x40028FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected Texture _texture0;

	[Token(Token = "0x40028FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected Texture _texture1;

	[Token(Token = "0x40028FE")]
	protected const float AnimationFrameTime = 0.5f;

	[Token(Token = "0x40028FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected float _animationTimeLeft;

	[Token(Token = "0x6004E68")]
	[Address(RVA = "0x5C1DDF0", Offset = "0x5C1CDF0", VA = "0x5C1DDF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/EmoteEmojiPopup.c (UI.EmoteEmojiPopup$$Setup): clean
		Transform pUVar1;
		RawImage pUVar2;

		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Panel/Emoji");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<RawImage>();
				this._emojiImage = pUVar2;
				pUVar1 = this.transform;
				this._transform = pUVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E69")]
	[Address(RVA = "0x5C1DEA0", Offset = "0x5C1CEA0", VA = "0x5C1DEA0", Slot = "62")]
	public override void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
		// Lifted from source/cpp/UI/EmoteEmojiPopup.c (UI.EmoteEmojiPopup$$Load): 8 lines keep C-only constructs
		Texture* targetAddress;
		Texture* targetAddress_00;
		HashSet<object> __this_00;
		RawImage pUVar1;
		String pSVar2;
		Texture2D pUVar3;
		bool bVar4;
		String pSVar5;
		String name;
		Texture value;

		if (Il2CppMethodInitialized_07547db8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547db8 = true;
		}
		this.ShowTimeLeft = showTime;
		this.Character = character;
		this.Offset.x = offset.x;
		this.Offset.y = offset.y;
		this.Offset.z = offset.z;
		targetAddress = &this._texture0;
		this._texture0 = null;
		targetAddress_00 = &this._texture1;
		this._texture1 = null;
		this._animated = false;
		bVar4 = (text == "Speaking");
		if (bVar4) {
			pSVar5 = "Icons/Game/Speaking";
		}
		else {
			if (text == null) goto label_05d1e2bb;
			bVar4 = text.StartsWith("Emoji");
			if (bVar4) {
				pSVar5 = String.Concat("Icons/Emotes/", text);
				__this_00 = (HashSet<object>)UIManager.AnimatedEmojis;
				if (__this_00 == null) goto label_05d1e2bb;
				bVar4 = __this_00.Contains((object)text);
				if (bVar4) {
					pSVar2 = ResourcePaths.UI;
					name = String.Concat(pSVar5, "_0");
					value = (Texture)ResourceManager.LoadAsset(pSVar2, name, true, false);
					pUVar3 = typeof(Texture2D);
					if (value == null) {
						*targetAddress = null;
					}
					else if ((value.klass != (Texture)typeof(Texture2D)) ||(*targetAddress = value, value.klass != (Texture)pUVar3)) goto label_05d1e265;
					pSVar2 = ResourcePaths.UI;
					pSVar5 = String.Concat(pSVar5, "_1");
					value = (Texture)ResourceManager.LoadAsset(pSVar2, pSVar5, true, false);
					pUVar3 = typeof(Texture2D);
					if (value == null) {
						*targetAddress_00 = null;
					}
					else if ((value.klass != (Texture)typeof(Texture2D)) ||(*targetAddress_00 = value, value.klass != (Texture)pUVar3)) goto label_05d1e265;
					pUVar1 = this._emojiImage;
					if (pUVar1 != null) {
						pUVar1.texture = this._texture0;
						this._animated = true;
						this._isFirstFrame = true;
						this._animationTimeLeft = 0.5;
						return;
					}
					goto label_05d1e2bb;
				}
			}
			else {
				pSVar5 = UIManager.GetProfileIcon(text);
				pSVar5 = String.Concat("Icons/Profile/", pSVar5);
			}
		}
		pUVar1 = this._emojiImage;
		pSVar2 = ResourcePaths.UI;
		value = (Texture)ResourceManager.LoadAsset(pSVar2, pSVar5, true, false);
		if (pUVar1 != null) {
			if ((value == null) ||(value.klass == (Texture)typeof(Texture2D))) {
				pUVar1.texture = value;
				return;
			}
	label_05d1e265: ;
			throw new InvalidCastException();
		}
	label_05d1e2bb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E6A")]
	[Address(RVA = "0x5C1E2C0", Offset = "0x5C1D2C0", VA = "0x5C1E2C0")]
	protected void Update()
	{
		// Lifted from source/cpp/UI/EmoteEmojiPopup.c (UI.EmoteEmojiPopup$$Update): 6 lines keep C-only constructs
		bool pbVar1;
		RawImage __this_00;
		Texture* ppUVar2;
		float fVar3;
		float fVar4;

		if ((this.IsActive != false) && (this._animated != false)) {
			fVar4 = this._animationTimeLeft;
			fVar3 = Time.deltaTime;
			fVar4 = fVar4 - fVar3;
			this._animationTimeLeft = fVar4;
			if (fVar4 <= 0.0) {
				this._animationTimeLeft = 0.5;
				__this_00 = this._emojiImage;
				if (this._isFirstFrame == false) {
					if (__this_00 == null) goto label_05d1e358;
					ppUVar2 = &this._texture0;
				}
				else {
					if (__this_00 == null) {
	label_05d1e358: ;
						throw new NullReferenceException();
					}
					ppUVar2 = &this._texture1;
				}
				__this_00.texture = *ppUVar2;
				pbVar1 = &this._isFirstFrame;
				*pbVar1 = (bool)(*pbVar1 ^ 1);
			}
		}
		return;
	}

	[Token(Token = "0x6004E6B")]
	[Address(RVA = "0x5C1E360", Offset = "0x5C1D360", VA = "0x5C1E360")]
	public EmoteEmojiPopup()
	{
		// Lifted from source/cpp/UI/EmoteEmojiPopup.c (UI.EmoteEmojiPopup$$.ctor): clean
		base();
		return;
	}
}
