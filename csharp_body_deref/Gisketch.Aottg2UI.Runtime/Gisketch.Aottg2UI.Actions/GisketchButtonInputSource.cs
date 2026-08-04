// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchButtonInputSource
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchButtonInputSource.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000B0")]
internal sealed class GisketchButtonInputSource : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, ISubmitHandler
{
	[Token(Token = "0x17000076")]
	public GisketchActionInputSource Source
	{
		[Token(Token = "0x600051A")]
		[Address(RVA = "0x3A93270", Offset = "0x3A93270", VA = "0x3A93270")]
		[CompilerGenerated]
		get
		{
			return default(GisketchActionInputSource);
		}
		[Token(Token = "0x600051B")]
		[Address(RVA = "0x3A93280", Offset = "0x3A93280", VA = "0x3A93280")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x3A93290", Offset = "0x3A93290", VA = "0x3A93290", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x3A93340", Offset = "0x3A93340", VA = "0x3A93340", Slot = "5")]
	public void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x3A933F0", Offset = "0x3A933F0", VA = "0x3A933F0")]
	public GisketchButtonInputSource()
	{
	}
}
