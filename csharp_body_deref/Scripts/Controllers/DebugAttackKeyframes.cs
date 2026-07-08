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

[Token(Token = "0x200047C")]
internal class DebugAttackKeyframes : MonoBehaviour
{
	[Token(Token = "0x200047D")]
	[CompilerGenerated]
	private sealed class _003CGenerateAttackFrames_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013AE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013AF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40013B0")]
		[FieldOffset(Offset = "0x20")]
		public DebugAttackKeyframes _003C_003E4__this;

		[Token(Token = "0x40013B1")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode _003Cdata_003E5__2;

		[Token(Token = "0x40013B2")]
		[FieldOffset(Offset = "0x30")]
		private JSONNode _003CnewData_003E5__3;

		[Token(Token = "0x40013B3")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ctotal_003E5__4;

		[Token(Token = "0x40013B4")]
		[FieldOffset(Offset = "0x40")]
		private JSONNode.KeyEnumerator _003C_003E7__wrap4;

		[Token(Token = "0x40013B5")]
		[FieldOffset(Offset = "0x88")]
		private string _003CattackName_003E5__6;

		[Token(Token = "0x40013B6")]
		[FieldOffset(Offset = "0x90")]
		private JSONObject _003CnewInfo_003E5__7;

		[Token(Token = "0x40013B7")]
		[FieldOffset(Offset = "0x98")]
		private JSONArray _003Cframes_003E5__8;

		[Token(Token = "0x40013B8")]
		[FieldOffset(Offset = "0xA0")]
		private float _003CstartTime_003E5__9;

		[Token(Token = "0x40013B9")]
		[FieldOffset(Offset = "0xA4")]
		private Vector3 _003CstartPosition_003E5__10;

		[Token(Token = "0x40013BA")]
		[FieldOffset(Offset = "0xB0")]
		private float[] _003Cmins_003E5__11;

		[Token(Token = "0x40013BB")]
		[FieldOffset(Offset = "0xB8")]
		private float[] _003Cmaxes_003E5__12;

		[Token(Token = "0x40013BC")]
		[FieldOffset(Offset = "0xC0")]
		private int _003CcurrFrame_003E5__13;

		[Token(Token = "0x17000937")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600300C")]
			[Address(RVA = "0x3E7CB30", Offset = "0x3E7CB30", VA = "0x3E7CB30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000938")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600300E")]
			[Address(RVA = "0x3E7CB80", Offset = "0x3E7CB80", VA = "0x3E7CB80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003009")]
		[Address(RVA = "0x3E7B680", Offset = "0x3E7B680", VA = "0x3E7B680")]
		[DebuggerHidden]
		public _003CGenerateAttackFrames_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600300A")]
		[Address(RVA = "0x3E7B9F0", Offset = "0x3E7B9F0", VA = "0x3E7B9F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600300B")]
		[Address(RVA = "0x3E7BA00", Offset = "0x3E7BA00", VA = "0x3E7BA00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600300D")]
		[Address(RVA = "0x3E7CB40", Offset = "0x3E7CB40", VA = "0x3E7CB40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40013AC")]
	[FieldOffset(Offset = "0x20")]
	protected BaseTitan _titan;

	[Token(Token = "0x40013AD")]
	[FieldOffset(Offset = "0x28")]
	protected string _name;

	[Token(Token = "0x6003005")]
	[Address(RVA = "0x3E7B3B0", Offset = "0x3E7B3B0", VA = "0x3E7B3B0")]
	protected void Awake()
	{
	}

	[Token(Token = "0x6003006")]
	[Address(RVA = "0x3E7B610", Offset = "0x3E7B610", VA = "0x3E7B610")]
	[IteratorStateMachine(typeof(_003CGenerateAttackFrames_003Ed__3))]
	public IEnumerator GenerateAttackFrames()
	{
		return null;
	}

	[Token(Token = "0x6003007")]
	[Address(RVA = "0x3E7B6A0", Offset = "0x3E7B6A0", VA = "0x3E7B6A0")]
	private JSONObject DebugCreateFrameJSON(int frame, BaseHitbox hitbox, float[] mins, float[] maxes, Vector3 position)
	{
		return null;
	}

	[Token(Token = "0x6003008")]
	[Address(RVA = "0x3E7B9E0", Offset = "0x3E7B9E0", VA = "0x3E7B9E0")]
	public DebugAttackKeyframes()
	{
	}
}
