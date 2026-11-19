// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileGasModeButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileGasModeButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x6004633")]
	[Address(RVA = "0x5B6DDA0", Offset = "0x5B6CDA0", VA = "0x5B6DDA0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6004634")]
	[Address(RVA = "0x5B6DDB0", Offset = "0x5B6CDB0", VA = "0x5B6DDB0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004635")]
	[Address(RVA = "0x5B6DCC0", Offset = "0x5B6CCC0", VA = "0x5B6DCC0")]
	private void Refresh()
	{
	}

	[Token(Token = "0x6004636")]
	[Address(RVA = "0x5B6DE10", Offset = "0x5B6CE10", VA = "0x5B6DE10")]
	public MobileGasModeButton()
	{
	}
}
