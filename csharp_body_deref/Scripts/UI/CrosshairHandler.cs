// ==================== AoTTG2 cross-reference ====================
// Type: UI.CrosshairHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CrosshairHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CrosshairHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;
using Utility;

namespace UI;

[Token(Token = "0x2000785")]
internal class CrosshairHandler : MonoBehaviour
{
	[Token(Token = "0x2000786")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400256C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400256D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400256E")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x400256F")]
		[FieldOffset(Offset = "0x28")]
		public CrosshairHandler _003C_003E4__this;

		[Token(Token = "0x4002570")]
		[FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x17000D04")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048FE")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D05")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004900")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048FB")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048FC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048FD")]
		[Address(RVA = "0x2253F10", Offset = "0x2252510", VA = "0x182253F10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048FF")]
		[Address(RVA = "0x22541F0", Offset = "0x22527F0", VA = "0x1822541F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002564")]
	[FieldOffset(Offset = "0x20")]
	public RawImage _crosshairImageWhite;

	[Token(Token = "0x4002565")]
	[FieldOffset(Offset = "0x28")]
	public RawImage _crosshairImageRed;

	[Token(Token = "0x4002566")]
	[FieldOffset(Offset = "0x30")]
	public Text _crosshairLabelWhite;

	[Token(Token = "0x4002567")]
	[FieldOffset(Offset = "0x38")]
	public Text _crosshairLabelRed;

	[Token(Token = "0x4002568")]
	[FieldOffset(Offset = "0x40")]
	public Image _arrowLeft;

	[Token(Token = "0x4002569")]
	[FieldOffset(Offset = "0x48")]
	public Image _arrowRight;

	[Token(Token = "0x400256A")]
	[FieldOffset(Offset = "0x0")]
	private static Texture2D _crosshairSkinTexture;

	[Token(Token = "0x400256B")]
	[FieldOffset(Offset = "0x8")]
	private static string _crosshairSkinURL;

	[Token(Token = "0x60048F7")]
	[Address(RVA = "0x223F270", Offset = "0x223D870", VA = "0x18223F270")]
	public void Awake()
	{
	}

	[Token(Token = "0x60048F8")]
	[Address(RVA = "0x223F760", Offset = "0x223DD60", VA = "0x18223F760")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__9))]
	private IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x60048F9")]
	[Address(RVA = "0x223F7F0", Offset = "0x223DDF0", VA = "0x18223F7F0")]
	private void Update()
	{
	}

	[Token(Token = "0x60048FA")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CrosshairHandler()
	{
	}
}
