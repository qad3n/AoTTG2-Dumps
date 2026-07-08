using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000213")]
internal class HumanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000214")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BA2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000BA3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000BA4")]
		[FieldOffset(Offset = "0x20")]
		public HumanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000BA5")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000BA6")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x4000BA7")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000162")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C8D")]
			[Address(RVA = "0x4144F10", Offset = "0x4144F10", VA = "0x4144F10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000163")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C8F")]
			[Address(RVA = "0x4144F60", Offset = "0x4144F60", VA = "0x4144F60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C8A")]
		[Address(RVA = "0x41436B0", Offset = "0x41436B0", VA = "0x41436B0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x41447E0", Offset = "0x41447E0", VA = "0x41447E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x41447F0", Offset = "0x41447F0", VA = "0x41447F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C8E")]
		[Address(RVA = "0x4144F20", Offset = "0x4144F20", VA = "0x4144F20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0x28")]
	private int _horseViewId;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x2C")]
	private float _hookLTiling;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x30")]
	private float _hookRTiling;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0x34")]
	public bool Finished;

	[Token(Token = "0x17000161")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x4143600", Offset = "0x4143600", VA = "0x4143600", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x4143630", Offset = "0x4143630", VA = "0x4143630", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__6))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x41436D0", Offset = "0x41436D0", VA = "0x41436D0")]
	public BaseCustomSkinPart GetCustomSkinPartPublic(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x41436F0", Offset = "0x41436F0", VA = "0x41436F0", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4144770", Offset = "0x4144770", VA = "0x4144770")]
	public HumanCustomSkinLoader()
	{
	}
}
