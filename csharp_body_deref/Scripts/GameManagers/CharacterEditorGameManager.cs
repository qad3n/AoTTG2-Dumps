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

[Token(Token = "0x2000375")]
internal class CharacterEditorGameManager : BaseGameManager
{
	[Token(Token = "0x2000376")]
	[CompilerGenerated]
	private sealed class _003CGenerateHumanPreviewsCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001152")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001153")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001154")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4001155")]
		[FieldOffset(Offset = "0x28")]
		private HumanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4001156")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4001157")]
		[FieldOffset(Offset = "0x38")]
		private List<BaseSetting>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4001158")]
		[FieldOffset(Offset = "0x50")]
		private HumanCustomSet _003Cpreset_003E5__5;

		[Token(Token = "0x17000259")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001584")]
			[Address(RVA = "0x58283E0", Offset = "0x58273E0", VA = "0x58283E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700025A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001586")]
			[Address(RVA = "0x5828430", Offset = "0x5827430", VA = "0x5828430", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001580")]
		[Address(RVA = "0x58260F0", Offset = "0x58250F0", VA = "0x58260F0")]
		[DebuggerHidden]
		public _003CGenerateHumanPreviewsCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001581")]
		[Address(RVA = "0x5826410", Offset = "0x5825410", VA = "0x5826410", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001582")]
		[Address(RVA = "0x5826470", Offset = "0x5825470", VA = "0x5826470", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001583")]
		[Address(RVA = "0x58283A0", Offset = "0x58273A0", VA = "0x58283A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001585")]
		[Address(RVA = "0x58283F0", Offset = "0x58273F0", VA = "0x58283F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000377")]
	[CompilerGenerated]
	private sealed class _003CGenerateTitanPreviewsCoroutine_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001159")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400115A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400115B")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x400115C")]
		[FieldOffset(Offset = "0x28")]
		private TitanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x400115D")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x400115E")]
		[FieldOffset(Offset = "0x38")]
		private List<string>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x400115F")]
		[FieldOffset(Offset = "0x50")]
		private string _003Chair_003E5__5;

		[Token(Token = "0x1700025B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600158B")]
			[Address(RVA = "0x5828E60", Offset = "0x5827E60", VA = "0x5828E60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700025C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600158D")]
			[Address(RVA = "0x5828EB0", Offset = "0x5827EB0", VA = "0x5828EB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001587")]
		[Address(RVA = "0x5826110", Offset = "0x5825110", VA = "0x5826110")]
		[DebuggerHidden]
		public _003CGenerateTitanPreviewsCoroutine_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001588")]
		[Address(RVA = "0x5828440", Offset = "0x5827440", VA = "0x5828440", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001589")]
		[Address(RVA = "0x5828490", Offset = "0x5827490", VA = "0x5828490", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600158A")]
		[Address(RVA = "0x5828E20", Offset = "0x5827E20", VA = "0x5828E20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600158C")]
		[Address(RVA = "0x5828E70", Offset = "0x5827E70", VA = "0x5828E70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400114B")]
	[FieldOffset(Offset = "0x0")]
	public static bool HumanMode;

	[Token(Token = "0x400114C")]
	[FieldOffset(Offset = "0x28")]
	public DummyHuman Human;

	[Token(Token = "0x400114D")]
	[FieldOffset(Offset = "0x30")]
	public DummyTitan Titan;

	[Token(Token = "0x400114E")]
	[FieldOffset(Offset = "0x38")]
	public DummyCharacter Character;

	[Token(Token = "0x400114F")]
	[FieldOffset(Offset = "0x8")]
	private static string PreviewFolderPath;

	[Token(Token = "0x4001150")]
	private const string TitanPreviewHair = "HairM1";

	[Token(Token = "0x4001151")]
	[FieldOffset(Offset = "0x40")]
	private GameObject platform;

	[Token(Token = "0x6001578")]
	[Address(RVA = "0x5825410", Offset = "0x5824410", VA = "0x5825410", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6001579")]
	[Address(RVA = "0x5825800", Offset = "0x5824800", VA = "0x5825800")]
	public void ReinstantiateCharacter(bool applySkins = true)
	{
	}

	[Token(Token = "0x600157A")]
	[Address(RVA = "0x5825EC0", Offset = "0x5824EC0", VA = "0x5825EC0")]
	public void GeneratePreviews()
	{
	}

	[Token(Token = "0x600157B")]
	[Address(RVA = "0x5826010", Offset = "0x5825010", VA = "0x5826010")]
	[IteratorStateMachine(typeof(_003CGenerateHumanPreviewsCoroutine_003Ed__10))]
	private IEnumerator GenerateHumanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x600157C")]
	[Address(RVA = "0x5826080", Offset = "0x5825080", VA = "0x5826080")]
	[IteratorStateMachine(typeof(_003CGenerateTitanPreviewsCoroutine_003Ed__11))]
	private IEnumerator GenerateTitanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x600157D")]
	[Address(RVA = "0x5826130", Offset = "0x5825130", VA = "0x5826130")]
	private void Screenshot(float x, float y, float w, float h, string file)
	{
	}

	[Token(Token = "0x600157E")]
	[Address(RVA = "0x5826350", Offset = "0x5825350", VA = "0x5826350")]
	public CharacterEditorGameManager()
	{
	}
}
