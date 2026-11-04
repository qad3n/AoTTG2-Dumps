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

[Token(Token = "0x200054B")]
[CompilerGenerated]
internal class CustomLogicCutsceneBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200054C")]
	public static class Factory
	{
		[Token(Token = "0x6003156")]
		[Address(RVA = "0x2016C30", Offset = "0x2015230", VA = "0x182016C30")]
		public static CustomLogicCutsceneBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200054D")]
	public static class Bindings
	{
		[Token(Token = "0x400170A")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003157")]
		[Address(RVA = "0x1FF1050", Offset = "0x1FEF650", VA = "0x181FF1050")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003158")]
		[Address(RVA = "0x20004B0", Offset = "0x1FFEAB0", VA = "0x1820004B0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__Start()
		{
			return null;
		}

		[Token(Token = "0x6003159")]
		[Address(RVA = "0x2000390", Offset = "0x1FFE990", VA = "0x182000390")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogue()
		{
			return null;
		}

		[Token(Token = "0x600315A")]
		[Address(RVA = "0x2000270", Offset = "0x1FFE870", VA = "0x182000270")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogueForTime()
		{
			return null;
		}

		[Token(Token = "0x600315B")]
		[Address(RVA = "0x1FFF2B0", Offset = "0x1FFD8B0", VA = "0x181FFF2B0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__HideDialogue()
		{
			return null;
		}
	}

	[Token(Token = "0x200054F")]
	[CompilerGenerated]
	private sealed class _003CStartCutscene_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001710")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001711")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001712")]
		[FieldOffset(Offset = "0x20")]
		public string name;

		[Token(Token = "0x4001713")]
		[FieldOffset(Offset = "0x28")]
		public bool full;

		[Token(Token = "0x17000935")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003166")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000936")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003168")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003163")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CStartCutscene_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003164")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003165")]
		[Address(RVA = "0x2017CD0", Offset = "0x20162D0", VA = "0x182017CD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003167")]
		[Address(RVA = "0x2017EE0", Offset = "0x20164E0", VA = "0x182017EE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000550")]
	[CompilerGenerated]
	private sealed class _003Croutine_ShowDialogueForTime_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001714")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001715")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001716")]
		[FieldOffset(Offset = "0x20")]
		public string icon;

		[Token(Token = "0x4001717")]
		[FieldOffset(Offset = "0x28")]
		public string title;

		[Token(Token = "0x4001718")]
		[FieldOffset(Offset = "0x30")]
		public string content;

		[Token(Token = "0x4001719")]
		[FieldOffset(Offset = "0x38")]
		public float time;

		[Token(Token = "0x17000937")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600316C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000938")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600316E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003169")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003Croutine_ShowDialogueForTime_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600316A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600316B")]
		[Address(RVA = "0x20194B0", Offset = "0x2017AB0", VA = "0x1820194B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600316D")]
		[Address(RVA = "0x20196C0", Offset = "0x2017CC0", VA = "0x1820196C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000931")]
	public override string ClassName
	{
		[Token(Token = "0x6003152")]
		[Address(RVA = "0x200CAF0", Offset = "0x200B0F0", VA = "0x18200CAF0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000932")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003153")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000933")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003154")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000934")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003155")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600314B")]
	[Address(RVA = "0x200CAA0", Offset = "0x200B0A0", VA = "0x18200CAA0")]
	public CustomLogicCutsceneBuiltin()
	{
	}

	[Token(Token = "0x600314C")]
	[Address(RVA = "0x200C9D0", Offset = "0x200AFD0", VA = "0x18200C9D0")]
	public void Start(string name, bool full)
	{
	}

	[Token(Token = "0x600314D")]
	[Address(RVA = "0x200C840", Offset = "0x200AE40", VA = "0x18200C840")]
	public void ShowDialogue(string icon, string title, string content)
	{
	}

	[Token(Token = "0x600314E")]
	[Address(RVA = "0x200C740", Offset = "0x200AD40", VA = "0x18200C740")]
	public void ShowDialogueForTime(string icon, string title, string content, float time)
	{
	}

	[Token(Token = "0x600314F")]
	[Address(RVA = "0x200C690", Offset = "0x200AC90", VA = "0x18200C690")]
	public void HideDialogue()
	{
	}

	[Token(Token = "0x6003150")]
	[Address(RVA = "0x200CB20", Offset = "0x200B120", VA = "0x18200CB20")]
	[IteratorStateMachine(typeof(_003Croutine_ShowDialogueForTime_003Ed__5))]
	private IEnumerator routine_ShowDialogueForTime(string icon, string title, string content, float time)
	{
		return null;
	}

	[Token(Token = "0x6003151")]
	[Address(RVA = "0x200C950", Offset = "0x200AF50", VA = "0x18200C950")]
	[IteratorStateMachine(typeof(_003CStartCutscene_003Ed__6))]
	private IEnumerator StartCutscene(string name, bool full)
	{
		return null;
	}
}
