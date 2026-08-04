// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCutsceneBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCutsceneBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCutsceneBuiltin.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003F8")]
[CompilerGenerated]
internal class CustomLogicCutsceneBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003F9")]
	public static class Factory
	{
		[Token(Token = "0x600282B")]
		[Address(RVA = "0x40B71A0", Offset = "0x40B71A0", VA = "0x40B71A0")]
		public static CustomLogicCutsceneBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003FA")]
	public static class Bindings
	{
		[Token(Token = "0x40010D3")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600282C")]
		[Address(RVA = "0x40B72C0", Offset = "0x40B72C0", VA = "0x40B72C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600282D")]
		[Address(RVA = "0x40B74A0", Offset = "0x40B74A0", VA = "0x40B74A0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__Start()
		{
			return null;
		}

		[Token(Token = "0x600282E")]
		[Address(RVA = "0x40B75F0", Offset = "0x40B75F0", VA = "0x40B75F0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogue()
		{
			return null;
		}

		[Token(Token = "0x600282F")]
		[Address(RVA = "0x40B7740", Offset = "0x40B7740", VA = "0x40B7740")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogueForTime()
		{
			return null;
		}

		[Token(Token = "0x6002830")]
		[Address(RVA = "0x40B7890", Offset = "0x40B7890", VA = "0x40B7890")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__HideDialogue()
		{
			return null;
		}
	}

	[Token(Token = "0x20003FC")]
	[CompilerGenerated]
	private sealed class _003CStartCutscene_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40010D9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40010DA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40010DB")]
		[FieldOffset(Offset = "0x20")]
		public string name;

		[Token(Token = "0x40010DC")]
		[FieldOffset(Offset = "0x28")]
		public bool full;

		[Token(Token = "0x17000851")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600283B")]
			[Address(RVA = "0x40B80B0", Offset = "0x40B80B0", VA = "0x40B80B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000852")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600283D")]
			[Address(RVA = "0x40B8100", Offset = "0x40B8100", VA = "0x40B8100", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002838")]
		[Address(RVA = "0x40B7120", Offset = "0x40B7120", VA = "0x40B7120")]
		[DebuggerHidden]
		public _003CStartCutscene_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002839")]
		[Address(RVA = "0x40B7EC0", Offset = "0x40B7EC0", VA = "0x40B7EC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600283A")]
		[Address(RVA = "0x40B7ED0", Offset = "0x40B7ED0", VA = "0x40B7ED0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600283C")]
		[Address(RVA = "0x40B80C0", Offset = "0x40B80C0", VA = "0x40B80C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20003FD")]
	[CompilerGenerated]
	private sealed class _003Croutine_ShowDialogueForTime_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40010DD")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40010DE")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40010DF")]
		[FieldOffset(Offset = "0x20")]
		public string icon;

		[Token(Token = "0x40010E0")]
		[FieldOffset(Offset = "0x28")]
		public string title;

		[Token(Token = "0x40010E1")]
		[FieldOffset(Offset = "0x30")]
		public string content;

		[Token(Token = "0x40010E2")]
		[FieldOffset(Offset = "0x38")]
		public float time;

		[Token(Token = "0x17000853")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002841")]
			[Address(RVA = "0x40B8310", Offset = "0x40B8310", VA = "0x40B8310", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000854")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002843")]
			[Address(RVA = "0x40B8360", Offset = "0x40B8360", VA = "0x40B8360", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600283E")]
		[Address(RVA = "0x40B7100", Offset = "0x40B7100", VA = "0x40B7100")]
		[DebuggerHidden]
		public _003Croutine_ShowDialogueForTime_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600283F")]
		[Address(RVA = "0x40B8110", Offset = "0x40B8110", VA = "0x40B8110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002840")]
		[Address(RVA = "0x40B8120", Offset = "0x40B8120", VA = "0x40B8120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002842")]
		[Address(RVA = "0x40B8320", Offset = "0x40B8320", VA = "0x40B8320", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x1700084D")]
	public override string ClassName
	{
		[Token(Token = "0x6002827")]
		[Address(RVA = "0x40B7140", Offset = "0x40B7140", VA = "0x40B7140", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700084E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002828")]
		[Address(RVA = "0x40B7170", Offset = "0x40B7170", VA = "0x40B7170", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700084F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002829")]
		[Address(RVA = "0x40B7180", Offset = "0x40B7180", VA = "0x40B7180", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000850")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600282A")]
		[Address(RVA = "0x40B7190", Offset = "0x40B7190", VA = "0x40B7190", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002820")]
	[Address(RVA = "0x40B6C00", Offset = "0x40B6C00", VA = "0x40B6C00")]
	public CustomLogicCutsceneBuiltin()
	{
	}

	[Token(Token = "0x6002821")]
	[Address(RVA = "0x40B6C70", Offset = "0x40B6C70", VA = "0x40B6C70")]
	public void Start(string name, bool full)
	{
	}

	[Token(Token = "0x6002822")]
	[Address(RVA = "0x40B6E00", Offset = "0x40B6E00", VA = "0x40B6E00")]
	public void ShowDialogue(string icon, string title, string content)
	{
	}

	[Token(Token = "0x6002823")]
	[Address(RVA = "0x40B6EF0", Offset = "0x40B6EF0", VA = "0x40B6EF0")]
	public void ShowDialogueForTime(string icon, string title, string content, float time)
	{
	}

	[Token(Token = "0x6002824")]
	[Address(RVA = "0x40B7040", Offset = "0x40B7040", VA = "0x40B7040")]
	public void HideDialogue()
	{
	}

	[Token(Token = "0x6002825")]
	[Address(RVA = "0x40B6F90", Offset = "0x40B6F90", VA = "0x40B6F90")]
	[IteratorStateMachine(typeof(_003Croutine_ShowDialogueForTime_003Ed__5))]
	private IEnumerator routine_ShowDialogueForTime(string icon, string title, string content, float time)
	{
		return null;
	}

	[Token(Token = "0x6002826")]
	[Address(RVA = "0x40B6D80", Offset = "0x40B6D80", VA = "0x40B6D80")]
	[IteratorStateMachine(typeof(_003CStartCutscene_003Ed__6))]
	private IEnumerator StartCutscene(string name, bool full)
	{
		return null;
	}
}
