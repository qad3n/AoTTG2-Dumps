// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.CharacterEditorGameManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/CharacterEditorGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/CharacterEditorGameManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000202")]
internal class CharacterEditorGameManager : BaseGameManager
{
	[Token(Token = "0x2000203")]
	[CompilerGenerated]
	private sealed class _003CGenerateHumanPreviewsCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000ACF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AD0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AD1")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4000AD2")]
		[FieldOffset(Offset = "0x28")]
		private HumanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4000AD3")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4000AD4")]
		[FieldOffset(Offset = "0x38")]
		private List<BaseSetting>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000AD5")]
		[FieldOffset(Offset = "0x50")]
		private HumanCustomSet _003Cpreset_003E5__5;

		[Token(Token = "0x1700017E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C00")]
			[Address(RVA = "0x44461E0", Offset = "0x44461E0", VA = "0x44461E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C02")]
			[Address(RVA = "0x4446230", Offset = "0x4446230", VA = "0x4446230", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BFC")]
		[Address(RVA = "0x4443720", Offset = "0x4443720", VA = "0x4443720")]
		[DebuggerHidden]
		public _003CGenerateHumanPreviewsCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BFD")]
		[Address(RVA = "0x4443A60", Offset = "0x4443A60", VA = "0x4443A60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BFE")]
		[Address(RVA = "0x4443AC0", Offset = "0x4443AC0", VA = "0x4443AC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BFF")]
		[Address(RVA = "0x44461A0", Offset = "0x44461A0", VA = "0x44461A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C01")]
		[Address(RVA = "0x44461F0", Offset = "0x44461F0", VA = "0x44461F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000204")]
	[CompilerGenerated]
	private sealed class _003CGenerateTitanPreviewsCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AD6")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AD7")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AD8")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4000AD9")]
		[FieldOffset(Offset = "0x28")]
		private TitanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4000ADA")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4000ADB")]
		[FieldOffset(Offset = "0x38")]
		private List<string>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000ADC")]
		[FieldOffset(Offset = "0x50")]
		private string _003Chair_003E5__5;

		[Token(Token = "0x17000180")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C07")]
			[Address(RVA = "0x4446D60", Offset = "0x4446D60", VA = "0x4446D60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000181")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C09")]
			[Address(RVA = "0x4446DB0", Offset = "0x4446DB0", VA = "0x4446DB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C03")]
		[Address(RVA = "0x4443740", Offset = "0x4443740", VA = "0x4443740")]
		[DebuggerHidden]
		public _003CGenerateTitanPreviewsCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C04")]
		[Address(RVA = "0x4446240", Offset = "0x4446240", VA = "0x4446240", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C05")]
		[Address(RVA = "0x4446290", Offset = "0x4446290", VA = "0x4446290", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C06")]
		[Address(RVA = "0x4446D20", Offset = "0x4446D20", VA = "0x4446D20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x4446D70", Offset = "0x4446D70", VA = "0x4446D70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000AC9")]
	[FieldOffset(Offset = "0x0")]
	public static bool HumanMode;

	[Token(Token = "0x4000ACA")]
	[FieldOffset(Offset = "0x28")]
	public DummyHuman Human;

	[Token(Token = "0x4000ACB")]
	[FieldOffset(Offset = "0x30")]
	public DummyTitan Titan;

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x38")]
	public DummyCharacter Character;

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x8")]
	private static string PreviewFolderPath;

	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x40")]
	private GameObject platform;

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x4442A50", Offset = "0x4442A50", VA = "0x4442A50", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x4442E30", Offset = "0x4442E30", VA = "0x4442E30")]
	public void ReinstantiateCharacter()
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x44434F0", Offset = "0x44434F0", VA = "0x44434F0")]
	public void GeneratePreviews()
	{
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x4443640", Offset = "0x4443640", VA = "0x4443640")]
	[IteratorStateMachine(typeof(_003CGenerateHumanPreviewsCoroutine_003Ed__9))]
	private IEnumerator GenerateHumanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x44436B0", Offset = "0x44436B0", VA = "0x44436B0")]
	[IteratorStateMachine(typeof(_003CGenerateTitanPreviewsCoroutine_003Ed__10))]
	private IEnumerator GenerateTitanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x4443760", Offset = "0x4443760", VA = "0x4443760")]
	private void Screenshot(float x, float y, float w, float h, string file)
	{
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x44439A0", Offset = "0x44439A0", VA = "0x44439A0")]
	public CharacterEditorGameManager()
	{
	}
}
