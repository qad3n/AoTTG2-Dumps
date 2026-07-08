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

[Token(Token = "0x20005E1")]
internal class CrosshairHandler : MonoBehaviour
{
	[Token(Token = "0x20005E2")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C81")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C82")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C83")]
		[FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4001C84")]
		[FieldOffset(Offset = "0x28")]
		public CrosshairHandler _003C_003E4__this;

		[Token(Token = "0x4001C85")]
		[FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x17000B45")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003BD6")]
			[Address(RVA = "0x3FA8930", Offset = "0x3FA8930", VA = "0x3FA8930", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B46")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003BD8")]
			[Address(RVA = "0x3FA8980", Offset = "0x3FA8980", VA = "0x3FA8980", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003BD3")]
		[Address(RVA = "0x3FA85E0", Offset = "0x3FA85E0", VA = "0x3FA85E0")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003BD4")]
		[Address(RVA = "0x3FA8690", Offset = "0x3FA8690", VA = "0x3FA8690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003BD5")]
		[Address(RVA = "0x3FA86A0", Offset = "0x3FA86A0", VA = "0x3FA86A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003BD7")]
		[Address(RVA = "0x3FA8940", Offset = "0x3FA8940", VA = "0x3FA8940", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C79")]
	[FieldOffset(Offset = "0x20")]
	public RawImage _crosshairImageWhite;

	[Token(Token = "0x4001C7A")]
	[FieldOffset(Offset = "0x28")]
	public RawImage _crosshairImageRed;

	[Token(Token = "0x4001C7B")]
	[FieldOffset(Offset = "0x30")]
	public Text _crosshairLabelWhite;

	[Token(Token = "0x4001C7C")]
	[FieldOffset(Offset = "0x38")]
	public Text _crosshairLabelRed;

	[Token(Token = "0x4001C7D")]
	[FieldOffset(Offset = "0x40")]
	public Image _arrowLeft;

	[Token(Token = "0x4001C7E")]
	[FieldOffset(Offset = "0x48")]
	public Image _arrowRight;

	[Token(Token = "0x4001C7F")]
	[FieldOffset(Offset = "0x0")]
	private static Texture2D _crosshairSkinTexture;

	[Token(Token = "0x4001C80")]
	[FieldOffset(Offset = "0x8")]
	private static string _crosshairSkinURL;

	[Token(Token = "0x6003BCF")]
	[Address(RVA = "0x3FA8050", Offset = "0x3FA8050", VA = "0x3FA8050")]
	public void Awake()
	{
	}

	[Token(Token = "0x6003BD0")]
	[Address(RVA = "0x3FA8550", Offset = "0x3FA8550", VA = "0x3FA8550")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__9))]
	private IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x6003BD1")]
	[Address(RVA = "0x3FA8600", Offset = "0x3FA8600", VA = "0x3FA8600")]
	private void Update()
	{
	}

	[Token(Token = "0x6003BD2")]
	[Address(RVA = "0x3FA8680", Offset = "0x3FA8680", VA = "0x3FA8680")]
	public CrosshairHandler()
	{
	}
}
