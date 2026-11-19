// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.DebugAttackKeyframes
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/DebugAttackKeyframes.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DebugAttackKeyframes.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000675")]
internal class DebugAttackKeyframes : MonoBehaviour
{
	[Token(Token = "0x2000676")]
	[CompilerGenerated]
	private sealed class _003CGenerateAttackFrames_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C9B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C9C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C9D")]
		[FieldOffset(Offset = "0x20")]
		public DebugAttackKeyframes _003C_003E4__this;

		[Token(Token = "0x4001C9E")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode _003Cdata_003E5__2;

		[Token(Token = "0x4001C9F")]
		[FieldOffset(Offset = "0x30")]
		private JSONNode _003CnewData_003E5__3;

		[Token(Token = "0x4001CA0")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ctotal_003E5__4;

		[Token(Token = "0x4001CA1")]
		[FieldOffset(Offset = "0x40")]
		private JSONNode.KeyEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x4001CA2")]
		[FieldOffset(Offset = "0x88")]
		private string _003CattackName_003E5__6;

		[Token(Token = "0x4001CA3")]
		[FieldOffset(Offset = "0x90")]
		private JSONObject _003CnewInfo_003E5__7;

		[Token(Token = "0x4001CA4")]
		[FieldOffset(Offset = "0x98")]
		private JSONArray _003Cframes_003E5__8;

		[Token(Token = "0x4001CA5")]
		[FieldOffset(Offset = "0xA0")]
		private float _003CstartTime_003E5__9;

		[Token(Token = "0x4001CA6")]
		[FieldOffset(Offset = "0xA4")]
		private Vector3 _003CstartPosition_003E5__10;

		[Token(Token = "0x4001CA7")]
		[FieldOffset(Offset = "0xB0")]
		private float[] _003Cmins_003E5__11;

		[Token(Token = "0x4001CA8")]
		[FieldOffset(Offset = "0xB8")]
		private float[] _003Cmaxes_003E5__12;

		[Token(Token = "0x4001CA9")]
		[FieldOffset(Offset = "0xC0")]
		private int _003CcurrFrame_003E5__13;

		[Token(Token = "0x17000AE1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003E1C")]
			[Address(RVA = "0x5A99E50", Offset = "0x5A98E50", VA = "0x5A99E50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AE2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003E1E")]
			[Address(RVA = "0x5A99EA0", Offset = "0x5A98EA0", VA = "0x5A99EA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003E19")]
		[Address(RVA = "0x5A989B0", Offset = "0x5A979B0", VA = "0x5A989B0")]
		[DebuggerHidden]
		public _003CGenerateAttackFrames_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003E1A")]
		[Address(RVA = "0x5A98D20", Offset = "0x5A97D20", VA = "0x5A98D20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003E1B")]
		[Address(RVA = "0x5A98D30", Offset = "0x5A97D30", VA = "0x5A98D30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003E1D")]
		[Address(RVA = "0x5A99E60", Offset = "0x5A98E60", VA = "0x5A99E60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C99")]
	[FieldOffset(Offset = "0x20")]
	protected BaseTitan _titan;

	[Token(Token = "0x4001C9A")]
	[FieldOffset(Offset = "0x28")]
	protected string _name;

	[Token(Token = "0x6003E15")]
	[Address(RVA = "0x5A986E0", Offset = "0x5A976E0", VA = "0x5A986E0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6003E16")]
	[Address(RVA = "0x5A98940", Offset = "0x5A97940", VA = "0x5A98940")]
	[IteratorStateMachine(typeof(_003CGenerateAttackFrames_003Ed__3))]
	public IEnumerator GenerateAttackFrames()
	{
		return null;
	}

	[Token(Token = "0x6003E17")]
	[Address(RVA = "0x5A989D0", Offset = "0x5A979D0", VA = "0x5A989D0")]
	private JSONObject DebugCreateFrameJSON(int frame, BaseHitbox hitbox, float[] mins, float[] maxes, Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6003E18")]
	[Address(RVA = "0x5A98D10", Offset = "0x5A97D10", VA = "0x5A98D10")]
	public DebugAttackKeyframes()
	{
	}
}
