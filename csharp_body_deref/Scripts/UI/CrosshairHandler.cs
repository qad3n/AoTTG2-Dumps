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

[Token(Token = "0x200062A")]
internal class CrosshairHandler : MonoBehaviour
{
	[Token(Token = "0x200062B")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DB7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DB8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DB9")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4001DBA")]
		[FieldOffset(Offset = "0x28")]
		public CrosshairHandler _003C_003E4__this;

		[Token(Token = "0x4001DBB")]
		[FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x17000BB5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003E11")]
			[Address(RVA = "0x42BA130", Offset = "0x42BA130", VA = "0x42BA130", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BB6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003E13")]
			[Address(RVA = "0x42BA180", Offset = "0x42BA180", VA = "0x42BA180", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003E0E")]
		[Address(RVA = "0x42B9DE0", Offset = "0x42B9DE0", VA = "0x42B9DE0")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003E0F")]
		[Address(RVA = "0x42B9E90", Offset = "0x42B9E90", VA = "0x42B9E90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003E10")]
		[Address(RVA = "0x42B9EA0", Offset = "0x42B9EA0", VA = "0x42B9EA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003E12")]
		[Address(RVA = "0x42BA140", Offset = "0x42BA140", VA = "0x42BA140", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001DAF")]
	[FieldOffset(Offset = "0x20")]
	public RawImage _crosshairImageWhite;

	[Token(Token = "0x4001DB0")]
	[FieldOffset(Offset = "0x28")]
	public RawImage _crosshairImageRed;

	[Token(Token = "0x4001DB1")]
	[FieldOffset(Offset = "0x30")]
	public Text _crosshairLabelWhite;

	[Token(Token = "0x4001DB2")]
	[FieldOffset(Offset = "0x38")]
	public Text _crosshairLabelRed;

	[Token(Token = "0x4001DB3")]
	[FieldOffset(Offset = "0x40")]
	public Image _arrowLeft;

	[Token(Token = "0x4001DB4")]
	[FieldOffset(Offset = "0x48")]
	public Image _arrowRight;

	[Token(Token = "0x4001DB5")]
	[FieldOffset(Offset = "0x0")]
	private static Texture2D _crosshairSkinTexture;

	[Token(Token = "0x4001DB6")]
	[FieldOffset(Offset = "0x8")]
	private static string _crosshairSkinURL;

	[Token(Token = "0x6003E0A")]
	[Address(RVA = "0x42B9850", Offset = "0x42B9850", VA = "0x42B9850")]
	public void Awake()
	{
	}

	[Token(Token = "0x6003E0B")]
	[Address(RVA = "0x42B9D50", Offset = "0x42B9D50", VA = "0x42B9D50")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__9))]
	private IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x6003E0C")]
	[Address(RVA = "0x42B9E00", Offset = "0x42B9E00", VA = "0x42B9E00")]
	private void Update()
	{
	}

	[Token(Token = "0x6003E0D")]
	[Address(RVA = "0x42B9E80", Offset = "0x42B9E80", VA = "0x42B9E80")]
	public CrosshairHandler()
	{
	}
}
