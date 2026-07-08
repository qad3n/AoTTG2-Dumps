using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20003BB")]
[CompilerGenerated]
internal class CustomLogicCutsceneBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003BC")]
	public static class Factory
	{
		[Token(Token = "0x6002665")]
		[Address(RVA = "0x3DB02D0", Offset = "0x3DB02D0", VA = "0x3DB02D0")]
		public static CustomLogicCutsceneBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003BD")]
	public static class Bindings
	{
		[Token(Token = "0x4000FE9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002666")]
		[Address(RVA = "0x3DB03F0", Offset = "0x3DB03F0", VA = "0x3DB03F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002667")]
		[Address(RVA = "0x3DB05D0", Offset = "0x3DB05D0", VA = "0x3DB05D0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__Start()
		{
			return null;
		}

		[Token(Token = "0x6002668")]
		[Address(RVA = "0x3DB0720", Offset = "0x3DB0720", VA = "0x3DB0720")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogue()
		{
			return null;
		}

		[Token(Token = "0x6002669")]
		[Address(RVA = "0x3DB0870", Offset = "0x3DB0870", VA = "0x3DB0870")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogueForTime()
		{
			return null;
		}

		[Token(Token = "0x600266A")]
		[Address(RVA = "0x3DB09C0", Offset = "0x3DB09C0", VA = "0x3DB09C0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__HideDialogue()
		{
			return null;
		}
	}

	[Token(Token = "0x20003BF")]
	[CompilerGenerated]
	private sealed class _003CStartCutscene_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000FEF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000FF0")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000FF1")]
		[FieldOffset(Offset = "0x20")]
		public string name;

		[Token(Token = "0x4000FF2")]
		[FieldOffset(Offset = "0x28")]
		public bool full;

		[Token(Token = "0x170007F3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6002675")]
			[Address(RVA = "0x3DB1200", Offset = "0x3DB1200", VA = "0x3DB1200", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002677")]
			[Address(RVA = "0x3DB1250", Offset = "0x3DB1250", VA = "0x3DB1250", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002672")]
		[Address(RVA = "0x3DB0FF0", Offset = "0x3DB0FF0", VA = "0x3DB0FF0")]
		[DebuggerHidden]
		public _003CStartCutscene_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002673")]
		[Address(RVA = "0x3DB1010", Offset = "0x3DB1010", VA = "0x3DB1010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002674")]
		[Address(RVA = "0x3DB1020", Offset = "0x3DB1020", VA = "0x3DB1020", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002676")]
		[Address(RVA = "0x3DB1210", Offset = "0x3DB1210", VA = "0x3DB1210", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20003C0")]
	[CompilerGenerated]
	private sealed class _003Croutine_ShowDialogueForTime_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000FF3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000FF4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000FF5")]
		[FieldOffset(Offset = "0x20")]
		public string icon;

		[Token(Token = "0x4000FF6")]
		[FieldOffset(Offset = "0x28")]
		public string title;

		[Token(Token = "0x4000FF7")]
		[FieldOffset(Offset = "0x30")]
		public string content;

		[Token(Token = "0x4000FF8")]
		[FieldOffset(Offset = "0x38")]
		public float time;

		[Token(Token = "0x170007F5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600267B")]
			[Address(RVA = "0x3DB1480", Offset = "0x3DB1480", VA = "0x3DB1480", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600267D")]
			[Address(RVA = "0x3DB14D0", Offset = "0x3DB14D0", VA = "0x3DB14D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002678")]
		[Address(RVA = "0x3DB1260", Offset = "0x3DB1260", VA = "0x3DB1260")]
		[DebuggerHidden]
		public _003Croutine_ShowDialogueForTime_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002679")]
		[Address(RVA = "0x3DB1280", Offset = "0x3DB1280", VA = "0x3DB1280", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600267A")]
		[Address(RVA = "0x3DB1290", Offset = "0x3DB1290", VA = "0x3DB1290", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600267C")]
		[Address(RVA = "0x3DB1490", Offset = "0x3DB1490", VA = "0x3DB1490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170007EF")]
	public override string ClassName
	{
		[Token(Token = "0x6002661")]
		[Address(RVA = "0x3DB0270", Offset = "0x3DB0270", VA = "0x3DB0270", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007F0")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002662")]
		[Address(RVA = "0x3DB02A0", Offset = "0x3DB02A0", VA = "0x3DB02A0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007F1")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002663")]
		[Address(RVA = "0x3DB02B0", Offset = "0x3DB02B0", VA = "0x3DB02B0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007F2")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002664")]
		[Address(RVA = "0x3DB02C0", Offset = "0x3DB02C0", VA = "0x3DB02C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600265A")]
	[Address(RVA = "0x3DAFD80", Offset = "0x3DAFD80", VA = "0x3DAFD80")]
	public CustomLogicCutsceneBuiltin()
	{
	}

	[Token(Token = "0x600265B")]
	[Address(RVA = "0x3DAFDF0", Offset = "0x3DAFDF0", VA = "0x3DAFDF0")]
	public void Start(string name, bool full)
	{
	}

	[Token(Token = "0x600265C")]
	[Address(RVA = "0x3DAFF70", Offset = "0x3DAFF70", VA = "0x3DAFF70")]
	public void ShowDialogue(string icon, string title, string content)
	{
	}

	[Token(Token = "0x600265D")]
	[Address(RVA = "0x3DB0060", Offset = "0x3DB0060", VA = "0x3DB0060")]
	public void ShowDialogueForTime(string icon, string title, string content, float time)
	{
	}

	[Token(Token = "0x600265E")]
	[Address(RVA = "0x3DB01B0", Offset = "0x3DB01B0", VA = "0x3DB01B0")]
	public void HideDialogue()
	{
	}

	[Token(Token = "0x600265F")]
	[Address(RVA = "0x3DB0100", Offset = "0x3DB0100", VA = "0x3DB0100")]
	[IteratorStateMachine(typeof(_003Croutine_ShowDialogueForTime_003Ed__5))]
	private IEnumerator routine_ShowDialogueForTime(string icon, string title, string content, float time)
	{
		return null;
	}

	[Token(Token = "0x6002660")]
	[Address(RVA = "0x3DAFF00", Offset = "0x3DAFF00", VA = "0x3DAFF00")]
	[IteratorStateMachine(typeof(_003CStartCutscene_003Ed__6))]
	private IEnumerator StartCutscene(string name, bool full)
	{
		return null;
	}
}
