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

[Token(Token = "0x20005AA")]
[CompilerGenerated]
internal class CustomLogicCutsceneBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005AB")]
	public static class Factory
	{
		[Token(Token = "0x60033E2")]
		[Address(RVA = "0x59C9FE0", Offset = "0x59C8FE0", VA = "0x59C9FE0")]
		public static CustomLogicCutsceneBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005AC")]
	public static class Bindings
	{
		[Token(Token = "0x40018AA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60033E3")]
		[Address(RVA = "0x59CA100", Offset = "0x59C9100", VA = "0x59CA100")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60033E4")]
		[Address(RVA = "0x59CA2E0", Offset = "0x59C92E0", VA = "0x59CA2E0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__Start()
		{
			return null;
		}

		[Token(Token = "0x60033E5")]
		[Address(RVA = "0x59CA420", Offset = "0x59C9420", VA = "0x59CA420")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogue()
		{
			return null;
		}

		[Token(Token = "0x60033E6")]
		[Address(RVA = "0x59CA560", Offset = "0x59C9560", VA = "0x59CA560")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__ShowDialogueForTime()
		{
			return null;
		}

		[Token(Token = "0x60033E7")]
		[Address(RVA = "0x59CA6A0", Offset = "0x59C96A0", VA = "0x59CA6A0")]
		public static CLMethodBinding<CustomLogicCutsceneBuiltin> __CreateMethodBinding__HideDialogue()
		{
			return null;
		}
	}

	[Token(Token = "0x20005AE")]
	[CompilerGenerated]
	private sealed class _003CStartCutscene_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40018B0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40018B1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40018B2")]
		[FieldOffset(Offset = "0x20")]
		public string name;

		[Token(Token = "0x40018B3")]
		[FieldOffset(Offset = "0x28")]
		public bool full;

		[Token(Token = "0x1700097D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033F2")]
			[Address(RVA = "0x59CAE40", Offset = "0x59C9E40", VA = "0x59CAE40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700097E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033F4")]
			[Address(RVA = "0x59CAE90", Offset = "0x59C9E90", VA = "0x59CAE90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033EF")]
		[Address(RVA = "0x59C9F60", Offset = "0x59C8F60", VA = "0x59C9F60")]
		[DebuggerHidden]
		public _003CStartCutscene_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033F0")]
		[Address(RVA = "0x59CAC40", Offset = "0x59C9C40", VA = "0x59CAC40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033F1")]
		[Address(RVA = "0x59CAC50", Offset = "0x59C9C50", VA = "0x59CAC50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60033F3")]
		[Address(RVA = "0x59CAE50", Offset = "0x59C9E50", VA = "0x59CAE50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20005AF")]
	[CompilerGenerated]
	private sealed class _003Croutine_ShowDialogueForTime_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40018B4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40018B5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40018B6")]
		[FieldOffset(Offset = "0x20")]
		public string icon;

		[Token(Token = "0x40018B7")]
		[FieldOffset(Offset = "0x28")]
		public string title;

		[Token(Token = "0x40018B8")]
		[FieldOffset(Offset = "0x30")]
		public string content;

		[Token(Token = "0x40018B9")]
		[FieldOffset(Offset = "0x38")]
		public float time;

		[Token(Token = "0x1700097F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033F8")]
			[Address(RVA = "0x59CB0A0", Offset = "0x59CA0A0", VA = "0x59CB0A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000980")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60033FA")]
			[Address(RVA = "0x59CB0F0", Offset = "0x59CA0F0", VA = "0x59CB0F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033F5")]
		[Address(RVA = "0x59C9F40", Offset = "0x59C8F40", VA = "0x59C9F40")]
		[DebuggerHidden]
		public _003Croutine_ShowDialogueForTime_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033F6")]
		[Address(RVA = "0x59CAEA0", Offset = "0x59C9EA0", VA = "0x59CAEA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033F7")]
		[Address(RVA = "0x59CAEB0", Offset = "0x59C9EB0", VA = "0x59CAEB0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60033F9")]
		[Address(RVA = "0x59CB0B0", Offset = "0x59CA0B0", VA = "0x59CB0B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000979")]
	public override string ClassName
	{
		[Token(Token = "0x60033DE")]
		[Address(RVA = "0x59C9F80", Offset = "0x59C8F80", VA = "0x59C9F80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700097A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60033DF")]
		[Address(RVA = "0x59C9FB0", Offset = "0x59C8FB0", VA = "0x59C9FB0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700097B")]
	public override bool IsStatic
	{
		[Token(Token = "0x60033E0")]
		[Address(RVA = "0x59C9FC0", Offset = "0x59C8FC0", VA = "0x59C9FC0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700097C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60033E1")]
		[Address(RVA = "0x59C9FD0", Offset = "0x59C8FD0", VA = "0x59C9FD0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60033D7")]
	[Address(RVA = "0x59C99D0", Offset = "0x59C89D0", VA = "0x59C99D0")]
	public CustomLogicCutsceneBuiltin()
	{
	}

	[Token(Token = "0x60033D8")]
	[Address(RVA = "0x59C9A40", Offset = "0x59C8A40", VA = "0x59C9A40")]
	public void Start(string name, bool full)
	{
	}

	[Token(Token = "0x60033D9")]
	[Address(RVA = "0x59C9BB0", Offset = "0x59C8BB0", VA = "0x59C9BB0")]
	public void ShowDialogue(string icon, string title, string content)
	{
	}

	[Token(Token = "0x60033DA")]
	[Address(RVA = "0x59C9CA0", Offset = "0x59C8CA0", VA = "0x59C9CA0")]
	public void ShowDialogueForTime(string icon, string title, string content, float time)
	{
	}

	[Token(Token = "0x60033DB")]
	[Address(RVA = "0x59C9E80", Offset = "0x59C8E80", VA = "0x59C9E80")]
	public void HideDialogue()
	{
	}

	[Token(Token = "0x60033DC")]
	[Address(RVA = "0x59C9DE0", Offset = "0x59C8DE0", VA = "0x59C9DE0")]
	[IteratorStateMachine(typeof(_003Croutine_ShowDialogueForTime_003Ed__5))]
	private IEnumerator routine_ShowDialogueForTime(string icon, string title, string content, float time)
	{
		return null;
	}

	[Token(Token = "0x60033DD")]
	[Address(RVA = "0x59C9B40", Offset = "0x59C8B40", VA = "0x59C9B40")]
	[IteratorStateMachine(typeof(_003CStartCutscene_003Ed__6))]
	private IEnumerator StartCutscene(string name, bool full)
	{
		return null;
	}
}
