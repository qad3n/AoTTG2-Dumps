using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200061B")]
internal class SnapshotPopup : BasePopup
{
	[Token(Token = "0x4001E17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private RawImage _image;

	[Token(Token = "0x17000BBF")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E04")]
		[Address(RVA = "0x3FD7050", Offset = "0x3FD7050", VA = "0x3FD7050", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC0")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E05")]
		[Address(RVA = "0x3FD7060", Offset = "0x3FD7060", VA = "0x3FD7060", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003E06")]
	[Address(RVA = "0x3FD7070", Offset = "0x3FD7070", VA = "0x3FD7070", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E07")]
	[Address(RVA = "0x3FD7100", Offset = "0x3FD7100", VA = "0x3FD7100", Slot = "59")]
	public virtual void Load(Texture2D texture)
	{
	}

	[Token(Token = "0x6003E08")]
	[Address(RVA = "0x3FD7120", Offset = "0x3FD7120", VA = "0x3FD7120")]
	public SnapshotPopup()
	{
	}
}
