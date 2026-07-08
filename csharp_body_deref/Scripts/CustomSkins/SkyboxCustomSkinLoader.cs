using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000217")]
internal class SkyboxCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000218")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BC0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000BC1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000BC2")]
		[FieldOffset(Offset = "0x20")]
		public SkyboxCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000BC3")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000BC4")]
		[FieldOffset(Offset = "0x30")]
		private List<int>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000165")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C9C")]
			[Address(RVA = "0x4145980", Offset = "0x4145980", VA = "0x4145980", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000166")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C9E")]
			[Address(RVA = "0x41459D0", Offset = "0x41459D0", VA = "0x41459D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x41450A0", Offset = "0x41450A0", VA = "0x41450A0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x4145390", Offset = "0x4145390", VA = "0x4145390", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x41453E0", Offset = "0x41453E0", VA = "0x41453E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x4145940", Offset = "0x4145940", VA = "0x4145940")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C9D")]
		[Address(RVA = "0x4145990", Offset = "0x4145990", VA = "0x4145990", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x0")]
	public static Material SkyboxMaterial;

	[Token(Token = "0x17000164")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x4144FF0", Offset = "0x4144FF0", VA = "0x4144FF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x4145020", Offset = "0x4145020", VA = "0x4145020", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__3))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x41450C0", Offset = "0x41450C0", VA = "0x41450C0", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x4145230", Offset = "0x4145230", VA = "0x4145230")]
	public string PartIdToTextureName(SkyboxCustomSkinPartId partId)
	{
		return null;
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x4145320", Offset = "0x4145320", VA = "0x4145320")]
	public SkyboxCustomSkinLoader()
	{
	}
}
