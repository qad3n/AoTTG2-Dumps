// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileGasModeButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileGasModeButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200073B")]
public class MobileGasModeButton : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x4002456")]
	[FieldOffset(Offset = "0x20")]
	private Image _image;

	[Token(Token = "0x4002457")]
	[FieldOffset(Offset = "0x28")]
	private MobileInputSkin _offSkin;

	[Token(Token = "0x4002458")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputSkin _onSkin;

	[Token(Token = "0x4002459")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x6004632")]
	[Address(RVA = "0x5B6B2D0", Offset = "0x5B6A2D0", VA = "0x5B6B2D0")]
	public void Setup(Image image, MobileInputSkin offSkin, MobileInputSkin onSkin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileGasModeButton.c (UI.MobileGasModeButton$$Setup): clean
		this._image = image;
		this._offSkin = offSkin;
		this._onSkin = onSkin;
		this._shape = shape;
		this.Refresh();
		return;
	}

	[Token(Token = "0x6004633")]
	[Address(RVA = "0x5B6DDA0", Offset = "0x5B6CDA0", VA = "0x5B6DDA0")]
	private void OnEnable()
	{
		// Lifted from source/cpp/UI/MobileGasModeButton.c (UI.MobileGasModeButton$$OnEnable): clean
		this.Refresh();
		return;
	}

	[Token(Token = "0x6004634")]
	[Address(RVA = "0x5B6DDB0", Offset = "0x5B6CDB0", VA = "0x5B6DDB0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileGasModeButton.c (UI.MobileGasModeButton$$OnPointerClick): 2 lines keep C-only constructs
		bool pbVar1;

		pbVar1 = &MobileInputBridge.AutoUseGasEnabled;
		*pbVar1 = (bool)(*pbVar1 ^ 1);
		this.Refresh();
		return;
	}

	[Token(Token = "0x6004635")]
	[Address(RVA = "0x5B6DCC0", Offset = "0x5B6CCC0", VA = "0x5B6DCC0")]
	private void Refresh()
	{
		// Lifted from source/cpp/UI/MobileGasModeButton.c (UI.MobileGasModeButton$$Refresh): 1 lines keep C-only constructs
		int shape;
		Image pUVar1;
		MobileInputSkin skin;
		bool bVar2;

		pUVar1 = this._image;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._image;
			skin = (&this._offSkin)[MobileInputBridge.AutoUseGasEnabled] ;
			shape = this._shape;
			MobileControlSkinManager.ApplySkin(pUVar1, skin, shape);
			return;
		}
		return;
	}

	[Token(Token = "0x6004636")]
	[Address(RVA = "0x5B6DE10", Offset = "0x5B6CE10", VA = "0x5B6DE10")]
	public MobileGasModeButton()
	{
		// Lifted from source/cpp/UI/MobileGasModeButton.c (UI.MobileGasModeButton$$.ctor): clean
		base();
		return;
	}
}
