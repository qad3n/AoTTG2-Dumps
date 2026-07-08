using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000210")]
internal class ForestCustomSkinLoader : LevelCustomSkinLoader
{
	[Token(Token = "0x2000211")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B8D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B8E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B8F")]
		[FieldOffset(Offset = "0x20")]
		public ForestCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000B90")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000B91")]
		[FieldOffset(Offset = "0x30")]
		private int[] _003CtrunkRandomIndices_003E5__2;

		[Token(Token = "0x4000B92")]
		[FieldOffset(Offset = "0x38")]
		private int[] _003CleafRandomIndices_003E5__3;

		[Token(Token = "0x4000B93")]
		[FieldOffset(Offset = "0x40")]
		private string[] _003CtrunkUrls_003E5__4;

		[Token(Token = "0x4000B94")]
		[FieldOffset(Offset = "0x48")]
		private string[] _003CleafUrls_003E5__5;

		[Token(Token = "0x4000B95")]
		[FieldOffset(Offset = "0x50")]
		private string _003CgroundUrl_003E5__6;

		[Token(Token = "0x4000B96")]
		[FieldOffset(Offset = "0x58")]
		private int _003Ci_003E5__7;

		[Token(Token = "0x4000B97")]
		[FieldOffset(Offset = "0x60")]
		private string _003CleafUrl_003E5__8;

		[Token(Token = "0x4000B98")]
		[FieldOffset(Offset = "0x68")]
		private BaseCustomSkinPart _003CleafPart_003E5__9;

		[Token(Token = "0x4000B99")]
		[FieldOffset(Offset = "0x70")]
		private List<GameObject>.Enumerator _003C_003E7__wrap9;

		[Token(Token = "0x1700015F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C82")]
			[Address(RVA = "0x41435A0", Offset = "0x41435A0", VA = "0x41435A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000160")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C84")]
			[Address(RVA = "0x41435F0", Offset = "0x41435F0", VA = "0x41435F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x4142160", Offset = "0x4142160", VA = "0x4142160")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x4142A10", Offset = "0x4142A10", VA = "0x4142A10", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x4142A60", Offset = "0x4142A60", VA = "0x4142A60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x4143560", Offset = "0x4143560", VA = "0x4143560")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x41435B0", Offset = "0x41435B0", VA = "0x41435B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B8B")]
	[FieldOffset(Offset = "0x28")]
	private List<GameObject> _treeObjects;

	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x30")]
	private List<GameObject> _groundObjects;

	[Token(Token = "0x1700015E")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C78")]
		[Address(RVA = "0x41420B0", Offset = "0x41420B0", VA = "0x41420B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x41420E0", Offset = "0x41420E0", VA = "0x41420E0", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__4))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4142180", Offset = "0x4142180", VA = "0x4142180")]
	protected BaseCustomSkinPart GetCustomSkinPart(int partId, GameObject levelObject)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x4142370", Offset = "0x4142370", VA = "0x4142370", Slot = "8")]
	protected override void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x4142760", Offset = "0x4142760", VA = "0x4142760")]
	private int[] SplitRandomIndices(char[] randomIndices, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x4142930", Offset = "0x4142930", VA = "0x4142930")]
	public ForestCustomSkinLoader()
	{
	}
}
