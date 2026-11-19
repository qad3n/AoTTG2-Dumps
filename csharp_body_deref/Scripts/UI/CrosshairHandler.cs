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

[Token(Token = "0x2000830")]
internal class CrosshairHandler : MonoBehaviour
{
	[Token(Token = "0x2000831")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40028DD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40028DE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40028DF")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x40028E0")]
		[FieldOffset(Offset = "0x28")]
		public CrosshairHandler _003C_003E4__this;

		[Token(Token = "0x40028E1")]
		[FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x17000D80")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004E24")]
			[Address(RVA = "0x5C1BB70", Offset = "0x5C1AB70", VA = "0x5C1BB70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D81")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004E26")]
			[Address(RVA = "0x5C1BBC0", Offset = "0x5C1ABC0", VA = "0x5C1BBC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004E21")]
		[Address(RVA = "0x5C1B890", Offset = "0x5C1A890", VA = "0x5C1B890")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004E22")]
		[Address(RVA = "0x5C1B8B0", Offset = "0x5C1A8B0", VA = "0x5C1B8B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004E23")]
		[Address(RVA = "0x5C1B8C0", Offset = "0x5C1A8C0", VA = "0x5C1B8C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004E25")]
		[Address(RVA = "0x5C1BB80", Offset = "0x5C1AB80", VA = "0x5C1BB80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40028D5")]
	[FieldOffset(Offset = "0x20")]
	public RawImage _crosshairImageWhite;

	[Token(Token = "0x40028D6")]
	[FieldOffset(Offset = "0x28")]
	public RawImage _crosshairImageRed;

	[Token(Token = "0x40028D7")]
	[FieldOffset(Offset = "0x30")]
	public Text _crosshairLabelWhite;

	[Token(Token = "0x40028D8")]
	[FieldOffset(Offset = "0x38")]
	public Text _crosshairLabelRed;

	[Token(Token = "0x40028D9")]
	[FieldOffset(Offset = "0x40")]
	public Image _arrowLeft;

	[Token(Token = "0x40028DA")]
	[FieldOffset(Offset = "0x48")]
	public Image _arrowRight;

	[Token(Token = "0x40028DB")]
	[FieldOffset(Offset = "0x0")]
	private static Texture2D _crosshairSkinTexture;

	[Token(Token = "0x40028DC")]
	[FieldOffset(Offset = "0x8")]
	private static string _crosshairSkinURL;

	[Token(Token = "0x6004E1D")]
	[Address(RVA = "0x5C1B280", Offset = "0x5C1A280", VA = "0x5C1B280")]
	public void Awake()
	{
	}

	[Token(Token = "0x6004E1E")]
	[Address(RVA = "0x5C1B780", Offset = "0x5C1A780", VA = "0x5C1B780")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__9))]
	private IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x6004E1F")]
	[Address(RVA = "0x5C1B800", Offset = "0x5C1A800", VA = "0x5C1B800")]
	private void Update()
	{
	}

	[Token(Token = "0x6004E20")]
	[Address(RVA = "0x5C1B880", Offset = "0x5C1A880", VA = "0x5C1B880")]
	public CrosshairHandler()
	{
	}
}
