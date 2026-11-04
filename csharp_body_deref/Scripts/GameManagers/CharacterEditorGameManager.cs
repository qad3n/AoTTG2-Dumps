// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.CharacterEditorGameManager
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000314")]
internal class CharacterEditorGameManager : BaseGameManager
{
	[Token(Token = "0x2000315")]
	[CompilerGenerated]
	private sealed class _003CGenerateHumanPreviewsCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000FB3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000FB4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000FB5")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4000FB6")]
		[FieldOffset(Offset = "0x28")]
		private HumanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4000FB7")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4000FB8")]
		[FieldOffset(Offset = "0x38")]
		private List<BaseSetting>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000FB9")]
		[FieldOffset(Offset = "0x50")]
		private HumanCustomSet _003Cpreset_003E5__5;

		[Token(Token = "0x17000212")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001312")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000213")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001314")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600130E")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGenerateHumanPreviewsCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600130F")]
		[Address(RVA = "0x1E3C160", Offset = "0x1E3A760", VA = "0x181E3C160", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001310")]
		[Address(RVA = "0x1E3A380", Offset = "0x1E38980", VA = "0x181E3A380", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001311")]
		[Address(RVA = "0x1E3C1F0", Offset = "0x1E3A7F0", VA = "0x181E3C1F0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001313")]
		[Address(RVA = "0x1E3C120", Offset = "0x1E3A720", VA = "0x181E3C120", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000316")]
	[CompilerGenerated]
	private sealed class _003CGenerateTitanPreviewsCoroutine_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000FBA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000FBB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000FBC")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4000FBD")]
		[FieldOffset(Offset = "0x28")]
		private TitanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4000FBE")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4000FBF")]
		[FieldOffset(Offset = "0x38")]
		private List<string>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000FC0")]
		[FieldOffset(Offset = "0x50")]
		private string _003Chair_003E5__5;

		[Token(Token = "0x17000214")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001319")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000215")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600131B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001315")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CGenerateTitanPreviewsCoroutine_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001316")]
		[Address(RVA = "0x1E61310", Offset = "0x1E5F910", VA = "0x181E61310", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001317")]
		[Address(RVA = "0x1E60890", Offset = "0x1E5EE90", VA = "0x181E60890", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001318")]
		[Address(RVA = "0x1E613A0", Offset = "0x1E5F9A0", VA = "0x181E613A0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600131A")]
		[Address(RVA = "0x1E612D0", Offset = "0x1E5F8D0", VA = "0x181E612D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000FAC")]
	[FieldOffset(Offset = "0x0")]
	public static bool HumanMode;

	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x28")]
	public DummyHuman Human;

	[Token(Token = "0x4000FAE")]
	[FieldOffset(Offset = "0x30")]
	public DummyTitan Titan;

	[Token(Token = "0x4000FAF")]
	[FieldOffset(Offset = "0x38")]
	public DummyCharacter Character;

	[Token(Token = "0x4000FB0")]
	[FieldOffset(Offset = "0x8")]
	private static string PreviewFolderPath;

	[Token(Token = "0x4000FB1")]
	private const string TitanPreviewHair = "HairM1";

	[Token(Token = "0x4000FB2")]
	[FieldOffset(Offset = "0x40")]
	private GameObject platform;

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x1E32310", Offset = "0x1E30910", VA = "0x181E32310", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6001307")]
	[Address(RVA = "0x1E32920", Offset = "0x1E30F20", VA = "0x181E32920")]
	public void ReinstantiateCharacter(bool applySkins = true)
	{
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x1E32730", Offset = "0x1E30D30", VA = "0x181E32730")]
	public void GeneratePreviews()
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x1E326C0", Offset = "0x1E30CC0", VA = "0x181E326C0")]
	[IteratorStateMachine(typeof(_003CGenerateHumanPreviewsCoroutine_003Ed__10))]
	private IEnumerator GenerateHumanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x1E328B0", Offset = "0x1E30EB0", VA = "0x181E328B0")]
	[IteratorStateMachine(typeof(_003CGenerateTitanPreviewsCoroutine_003Ed__11))]
	private IEnumerator GenerateTitanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x1E32F60", Offset = "0x1E31560", VA = "0x181E32F60")]
	private void Screenshot(float x, float y, float w, float h, string file)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public CharacterEditorGameManager()
	{
	}
}
